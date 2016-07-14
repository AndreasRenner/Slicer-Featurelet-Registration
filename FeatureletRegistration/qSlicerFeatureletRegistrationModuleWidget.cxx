/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QDebug>
#include <QMessageBox>
#include <qstring.h>

// SlicerQt includes
#include "qSlicerFeatureletRegistrationModuleWidget.h"
#include "ui_qSlicerFeatureletRegistrationModuleWidget.h"

// FeatureletRegistration Logic includes
#include <vtkSlicerFeatureletRegistrationLogic.h>

// SlicerQt includes
#include <qSlicerAbstractCoreModule.h>

// MRML includes
#include <vtkMRMLVolumeNode.h>
#include <vtkMRMLApplicationLogic.h>
#include <vtkMRMLFeatureletRegistrationNode.h>
#include <vtkMRMLScene.h>
#include <vtkMRMLDisplayNode.h>
#include <vtkMRMLSelectionNode.h>

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerFeatureletRegistrationModuleWidgetPrivate: public Ui_qSlicerFeatureletRegistrationModuleWidget
{
    Q_DECLARE_PUBLIC(qSlicerFeatureletRegistrationModuleWidget);
  protected:
    qSlicerFeatureletRegistrationModuleWidget* const q_ptr;

  public:
    qSlicerFeatureletRegistrationModuleWidgetPrivate(qSlicerFeatureletRegistrationModuleWidget& object);
    ~qSlicerFeatureletRegistrationModuleWidgetPrivate();

    vtkSlicerFeatureletRegistrationLogic* logic() const;

    /// Using this flag prevents overriding the parameter set node contents when the
    /// QMRMLCombobox selects the first instance of the specified node type when initializing
    bool ModuleWindowInitialized;
};


//-----------------------------------------------------------------------------
// qSlicerFeatureletRegistrationModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerFeatureletRegistrationModuleWidgetPrivate::qSlicerFeatureletRegistrationModuleWidgetPrivate(qSlicerFeatureletRegistrationModuleWidget& object)
                                      : q_ptr(&object)
                                      , ModuleWindowInitialized(false) {
}

//-----------------------------------------------------------------------------
qSlicerFeatureletRegistrationModuleWidgetPrivate::~qSlicerFeatureletRegistrationModuleWidgetPrivate() {
}

//-----------------------------------------------------------------------------
vtkSlicerFeatureletRegistrationLogic* qSlicerFeatureletRegistrationModuleWidgetPrivate::logic() const {
  Q_Q(const qSlicerFeatureletRegistrationModuleWidget);
  return vtkSlicerFeatureletRegistrationLogic::SafeDownCast(q->logic());
}


//-----------------------------------------------------------------------------
// qSlicerFeatureletRegistrationModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerFeatureletRegistrationModuleWidget::qSlicerFeatureletRegistrationModuleWidget(QWidget* _parent)
                               : Superclass( _parent )
                               , d_ptr( new qSlicerFeatureletRegistrationModuleWidgetPrivate(*this) ) {
  this->FeatureletRegistrationNode = NULL;
}

//-----------------------------------------------------------------------------
qSlicerFeatureletRegistrationModuleWidget::~qSlicerFeatureletRegistrationModuleWidget() {
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::setMRMLScene(vtkMRMLScene* scene) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  this->Superclass::setMRMLScene(scene);

  qvtkReconnect( d->logic(), scene, vtkMRMLScene::EndImportEvent,
                 this, SLOT(onSceneImportedEvent()) );

  // Find parameters node or create it if there is none in the scene
  if (scene &&  d->logic()->GetFeatureletRegistrationNode() == 0) {
    vtkMRMLNode* node = scene->GetNthNodeByClass(0, "vtkMRMLFeatureletRegistrationNode");
    if (node) {
      this->setFeatureletRegistrationNode( vtkMRMLFeatureletRegistrationNode::SafeDownCast(node) );
    }
  }
  this->initializeFeatureletRegistrationNode(scene);
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::initializeFeatureletRegistrationNode(vtkMRMLScene* scene) {
  vtkCollection* FeatureletRegistrationNodes = scene->GetNodesByClass("vtkMRMLFeatureletRegistrationNode");

  if(FeatureletRegistrationNodes->GetNumberOfItems() > 0) {
    this->FeatureletRegistrationNode = vtkMRMLFeatureletRegistrationNode::SafeDownCast(FeatureletRegistrationNodes->GetItemAsObject(0));
    if(!this->FeatureletRegistrationNode) {
      qCritical() << "FATAL ERROR: Cannot instantiate FeatureletRegistrationNode";
      Q_ASSERT(this->FeatureletRegistrationNode);
    }
  }
  else {
    this->FeatureletRegistrationNode = vtkMRMLFeatureletRegistrationNode::New();
    scene->AddNode(this->FeatureletRegistrationNode);
    this->FeatureletRegistrationNode->Delete();
  }
  FeatureletRegistrationNodes->Delete();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onSceneImportedEvent() {
  this->onEnter();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::enter() {
  this->onEnter();
  this->Superclass::enter();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onEnter() {
  if (this->mrmlScene() == 0) {
    std::cerr << "onEnter failed - ModuleWindow is not initialized - mrmlScene is null" << std::endl;
    return;
  }
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  // First check the logic if it has a parameter node
  if (d->logic() == NULL) {
      std::cerr << "onEnter failed - ModuleWindow is not initialized - logic is null" << std::endl;
    return;
  }
  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();

  // If we have a parameter node select it
  if (paramNode == NULL) {
    vtkMRMLNode* node = this->mrmlScene()->GetNthNodeByClass(0, "vtkMRMLFeatureletRegistrationNode");
    if (node) {
      paramNode = vtkMRMLFeatureletRegistrationNode::SafeDownCast(node);
      d->logic()->SetAndObserveFeatureletRegistrationNode(paramNode);
      return;
    }
    else {
      vtkSmartPointer<vtkMRMLFeatureletRegistrationNode> newNode = vtkSmartPointer<vtkMRMLFeatureletRegistrationNode>::New();
      this->mrmlScene()->AddNode(newNode);
      d->logic()->SetAndObserveFeatureletRegistrationNode(newNode);
    }
  }
  d->ModuleWindowInitialized = true;
  this->updateWidgetFromMRML();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::setFeatureletRegistrationNode(vtkMRMLNode *node) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = vtkMRMLFeatureletRegistrationNode::SafeDownCast(node);

  // Each time the node is modified, the qt widgets are updated
  qvtkReconnect( d->logic()->GetFeatureletRegistrationNode(), paramNode, vtkCommand::ModifiedEvent,
                 this, SLOT(updateWidgetFromMRML()) );

  d->logic()->SetAndObserveFeatureletRegistrationNode(paramNode);

  // Set selected MRML nodes in comboboxes in the parameter set if it was NULL there (then in the
  // meantime  the comboboxes selected the first one from the scene and we have to set that)
  if (paramNode) {
    if ( (qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetFixedImageNodeID()))
      && d->FixedImageComboBox->currentNode() ) {
      paramNode->SetAndObserveFixedImageNodeID(d->FixedImageComboBox->currentNodeID().toLatin1());
    }
    if ( (qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetMovingImageNodeID()))
      && d->MovingImageComboBox->currentNode() ) {
      paramNode->SetAndObserveMovingImageNodeID(d->MovingImageComboBox->currentNodeID().toLatin1());
    }
    if ( (qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetDeformedImageNodeID()))
      && d->DeformedImageComboBox->currentNode() ) {
      paramNode->SetAndObserveDeformedImageNodeID(d->DeformedImageComboBox->currentNodeID().toLatin1());
    }
    if ( (qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetDeformationFieldID()))
      && d->DeformationFieldComboBox->currentNode() ) {
      paramNode->SetAndObserveDeformationFieldID(d->DeformationFieldComboBox->currentNodeID().toLatin1());
    }
    if ( (qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetFiducialPointsID()))
      && d->FiducialPointsComboBox->currentNode() ) {
      paramNode->SetAndObserveFiducialPointsID(d->FiducialPointsComboBox->currentNodeID().toLatin1());
    }
  }
  this->updateWidgetFromMRML();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::updateWidgetFromMRML() {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if (paramNode && this->mrmlScene()) {
    if (!qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetFixedImageNodeID())) {
      d->FixedImageComboBox->setCurrentNodeID(paramNode->GetFixedImageNodeID());
    }
    if (!qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetMovingImageNodeID())) {
      d->MovingImageComboBox->setCurrentNodeID(paramNode->GetMovingImageNodeID());
    }
    if (!qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetDeformedImageNodeID())) {
      d->DeformedImageComboBox->setCurrentNodeID(paramNode->GetDeformedImageNodeID());
    }
    if (!qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetDeformationFieldID())) {
      d->DeformationFieldComboBox->setCurrentNodeID(paramNode->GetDeformationFieldID());
    }
    if (!qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(paramNode->GetFiducialPointsID())) {
      d->FiducialPointsComboBox->setCurrentNodeID(paramNode->GetFiducialPointsID());
    }
    d->horizontalSlider->setValue(paramNode->GetFeatureletsSize());
    d->horizontalSlider_2->setValue(paramNode->GetSearchRegionSize());
    d->horizontalSlider_3->setValue(paramNode->GetFeatureletsSizeZ());
    d->horizontalSlider_4->setValue(paramNode->GetSearchRegionSizeZ());
    d->doubleSpinBox_Max->setValue(paramNode->GetMaxStepLength());
    d->doubleSpinBox_Min->setValue(paramNode->GetMinStepLength());
    d->spinBox_NumberIterations->setValue(paramNode->GetNumberIterations());
    d->checkBox_2->setChecked(paramNode->GetcheckBoxFiducial());
    d->checkBox_3->setChecked(paramNode->GetcheckBoxDebug());
    d->checkBox_4->setChecked(paramNode->GetcheckBoxRigid());
    d->checkBox_5->setChecked(paramNode->GetcheckBoxZDifferent());
    d->progressBar->setValue(paramNode->Getprogress());

    if (paramNode->GetUseCorrelationForSimilarity()) {
      d->radioButton_Similarity->setChecked(true);
    }
    else {
      d->radioButton_Similarity_2->setChecked(true);
    }
    if (paramNode->GetUseLinearCorrelation()) {
      d->radioButton_Interpolation->setChecked(true);
    }
    else {
      d->radioButton_Interpolation_2->setChecked(true);
    }
  }
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::setup() {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();

  //Make connections
  connect(d->RunButton, SIGNAL(clicked()),
          this, SLOT(onRunClicked()) );
  connect(d->ShowButton, SIGNAL(clicked()),
          this, SLOT(onShowVolume()) );
  connect(d->ShowButton2, SIGNAL(clicked()),
          this, SLOT(onShowVolume2()) );

  connect(d->FixedImageComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)),
          this, SLOT(onFixedImageNodeChanged(vtkMRMLNode*)));
  connect(d->MovingImageComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)),
          this, SLOT(onMovingImageNodeChanged(vtkMRMLNode*)));
  connect(d->DeformedImageComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)),
          this, SLOT(onDeformedImageNodeChanged(vtkMRMLNode*)));
  connect(d->DeformedImageComboBox, SIGNAL(nodeAddedByUser(vtkMRMLNode*)),
          this, SLOT(onDeformedImageNodeAddedByUser(vtkMRMLNode*)));
  connect(d->DeformationFieldComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)),
          this, SLOT(onDeformationFieldChanged(vtkMRMLNode*)));
  connect(d->DeformationFieldComboBox, SIGNAL(nodeAddedByUser(vtkMRMLNode*)),
          this, SLOT(onDeformationFieldAddedByUser(vtkMRMLNode*)));
  connect(d->FiducialPointsComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)),
          this, SLOT(onFiducialPointsNodeChanged(vtkMRMLNode*)));
  connect(d->FiducialPointsComboBox, SIGNAL(nodeAddedByUser(vtkMRMLNode*)),
          this, SLOT(onFiducialPointsNodeAddedByUser(vtkMRMLNode*)));

  connect(d->horizontalSlider, SIGNAL(valueChanged(int)),
          this, SLOT(onFeatureletsSizeChanged(int)));
  connect(d->horizontalSlider_2, SIGNAL(valueChanged(int)),
          this, SLOT(onSearchRegionSizeChanged(int)));
  connect(d->horizontalSlider_3, SIGNAL(valueChanged(int)),
          this, SLOT(onFeatureletsSizeZChanged(int)));
  connect(d->horizontalSlider_4, SIGNAL(valueChanged(int)),
          this, SLOT(onSearchRegionSizeZChanged(int)));
  connect(d->doubleSpinBox_Max, SIGNAL(valueChanged(double)),
          this, SLOT(onMaxStepLengthChanged(double)));
  connect(d->doubleSpinBox_Min, SIGNAL(valueChanged(double)),
          this, SLOT(onMinStepLengthChanged(double)));
  connect(d->spinBox_NumberIterations, SIGNAL(valueChanged(int)),
          this, SLOT(onNumberIterationsChanged(int)));
  connect(d->radioButton_Similarity, SIGNAL(toggled(bool)),
          this, SLOT(onSimilarityMeasureChanged(bool)));
  connect(d->radioButton_Interpolation, SIGNAL(toggled(bool)),
          this, SLOT(onInterpolationTypeChanged(bool)));
  connect(d->checkBox_2, SIGNAL(clicked(bool)),
          this, SLOT(oncheckBoxFiducialChanged(bool)));
  connect(d->checkBox_3, SIGNAL(clicked(bool)),
          this, SLOT(oncheckBoxDebugChanged(bool)));
  connect(d->checkBox_4, SIGNAL(clicked(bool)),
          this, SLOT(oncheckBoxRigidChanged(bool)));
  connect(d->checkBox_5, SIGNAL(clicked(bool)),
          this, SLOT(oncheckBoxZDifferentChanged(bool)));

  // Handle scene change event if occurs
  qvtkConnect( d->logic(), vtkCommand::ModifiedEvent, this, SLOT( onLogicModified() ) );
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onLogicModified() {
  this->updateWidgetFromMRML();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onRunClicked() {
  Q_D(const qSlicerFeatureletRegistrationModuleWidget);
  vtkSlicerFeatureletRegistrationLogic *logic = d->logic();

  if( !this->FeatureletRegistrationNode || !d->FixedImageComboBox->currentNode() || !d->MovingImageComboBox->currentNode() ) {
    std::cerr << "A fixed / moving image has to be selected!" << std::endl;
    return;
  }
  if(!d->DeformedImageComboBox->currentNode()) {
    std::cerr << "A deformed image (and a deformation field) for output has to be selected!" << std::endl;
    return;
  }
  if(!d->DeformationFieldComboBox->currentNode()) {
    std::cerr << "A deformation field for output has to be selected!" << std::endl;
    return;
  }
  this->FeatureletRegistrationNode->SetFixedImageNodeID(d->FixedImageComboBox->currentNode()->GetID());
  this->FeatureletRegistrationNode->SetMovingImageNodeID(d->MovingImageComboBox->currentNode()->GetID());
  this->FeatureletRegistrationNode->SetDeformedImageNodeID(d->DeformedImageComboBox->currentNode()->GetID());
  this->FeatureletRegistrationNode->SetDeformationFieldID(d->DeformationFieldComboBox->currentNode()->GetID());

  if(this->FeatureletRegistrationNode->GetcheckBoxFiducial()){
    if(!d->FiducialPointsComboBox->currentNode()) {
      std::cerr << "Fiducial points have to be selected!" << std::endl;
      return;
    }
    this->FeatureletRegistrationNode->SetFiducialPointsID(d->FiducialPointsComboBox->currentNode()->GetID());
  }

  if(!logic->RunClicked(this->FeatureletRegistrationNode)) {
    std::cerr << "Registration is done!" << std::endl;
    vtkSlicerApplicationLogic *appLogic = this->module()->appLogic();
    vtkMRMLSelectionNode *selectionNode = appLogic->GetSelectionNode();
    selectionNode->SetReferenceActiveVolumeID(this->FeatureletRegistrationNode->GetDeformedImageNodeID());
    appLogic->PropagateVolumeSelection();
  }
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onShowVolume() {
    Q_D(const qSlicerFeatureletRegistrationModuleWidget);
    vtkSlicerFeatureletRegistrationLogic *logic = d->logic();

    if( !this->FeatureletRegistrationNode || !d->FixedImageComboBox->currentNode() ) {
        std::cerr << "Memberfunction onShowVolume is not executed - termination condiation fulfilled" << std::endl;
        return;
    }
    this->FeatureletRegistrationNode->SetFixedImageNodeID(d->FixedImageComboBox->currentNode()->GetID());
    bool fixedImage = true;

    if(!logic->ShowVolume(this->FeatureletRegistrationNode, fixedImage)) {
      //std::cerr << "Propagating to the selection node" << std::endl;
      vtkSlicerApplicationLogic *appLogic = this->module()->appLogic();
      vtkMRMLSelectionNode *selectionNode = appLogic->GetSelectionNode();

      //char* activeNodeID = selectionNode->GetActiveVolumeID();
      //std::cerr << "Selection Node (before): " << activeNodeID << std::endl;
      selectionNode->SetReferenceActiveVolumeID(this->FeatureletRegistrationNode->GetFixedImageNodeID());
      appLogic->PropagateVolumeSelection();
      //std::cerr << "Selection Node (after): " << activeNodeID << std::endl << std::endl;
    }
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onShowVolume2() {
    Q_D(const qSlicerFeatureletRegistrationModuleWidget);
    vtkSlicerFeatureletRegistrationLogic *logic = d->logic();

    if(!this->FeatureletRegistrationNode || !d->MovingImageComboBox->currentNode()) {
      std::cerr << "Memberfunction onShowVolume is not executed - termination condiation fulfilled" << std::endl;
      return;
    }
    this->FeatureletRegistrationNode->SetMovingImageNodeID(d->MovingImageComboBox->currentNode()->GetID());
    bool fixedImage = false;

    if(!logic->ShowVolume(this->FeatureletRegistrationNode, fixedImage)) {
      //std::cerr << "Propagating to the selection node" << std::endl;
      vtkSlicerApplicationLogic *appLogic = this->module()->appLogic();
      vtkMRMLSelectionNode *selectionNode = appLogic->GetSelectionNode();

      //char* activeNodeID = selectionNode->GetActiveVolumeID();
      //std::cerr << "Selection Node (before): " << activeNodeID << std::endl;
      selectionNode->SetReferenceActiveVolumeID(this->FeatureletRegistrationNode->GetMovingImageNodeID());
      appLogic->PropagateVolumeSelection();
      //std::cerr << "Selection Node (after): " << activeNodeID << std::endl << std::endl;
    }
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onFixedImageNodeChanged(vtkMRMLNode* node) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  bool debugMode = false;
  if(paramNode)
    debugMode = paramNode->GetcheckBoxDebug();

  //For showing the selection Node
  if(debugMode) {
    vtkSlicerApplicationLogic *appLogic = this->module()->appLogic();
    vtkMRMLSelectionNode *selectionNode = appLogic->GetSelectionNode();
    char* activeNodeID = selectionNode->GetActiveVolumeID();
    std::cerr << "Selection Node: " << activeNodeID << std::endl;
  }

  if(!paramNode || !this->mrmlScene() || !node || !d->ModuleWindowInitialized) {
    if(debugMode) {
      std::cerr << "Moving Image Node: termination condiation fulfilled" << std::endl;
      std::cerr << "FeatureletRegistrationNode: " << paramNode << std::endl;
      std::cerr << "This->mrmlScene: " << this->mrmlScene() << std::endl;
      std::cerr << "vtkMRMLNode: " << node << std::endl << std::endl;
    }
    return;
  }
  paramNode->DisableModifiedEventOn();
  paramNode->SetAndObserveFixedImageNodeID(node->GetID());
  paramNode->DisableModifiedEventOff();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onMovingImageNodeChanged(vtkMRMLNode* node) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  bool debugMode = false;
  if(paramNode)
    debugMode = paramNode->GetcheckBoxDebug();

  //For showing the selection Node
  if(debugMode) {
    vtkSlicerApplicationLogic *appLogic = this->module()->appLogic();
    vtkMRMLSelectionNode *selectionNode = appLogic->GetSelectionNode();
    char* activeNodeID = selectionNode->GetActiveVolumeID();
    std::cerr << "Selection Node: " << activeNodeID << std::endl;
  }

  if(!paramNode || !this->mrmlScene() || !node || !d->ModuleWindowInitialized) {
    if(debugMode) {
      std::cerr << "Moving Image Node: termination condiation fulfilled" << std::endl;
      std::cerr << "FeatureletRegistrationNode: " << paramNode << std::endl;
      std::cerr << "This->mrmlScene: " << this->mrmlScene() << std::endl;
      std::cerr << "vtkMRMLNode: " << node << std::endl << std::endl;
    }
    return;
  }
  paramNode->DisableModifiedEventOn();
  paramNode->SetAndObserveMovingImageNodeID(node->GetID());
  paramNode->DisableModifiedEventOff();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onDeformedImageNodeChanged(vtkMRMLNode* node) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  bool debugMode = false;
  if(paramNode)
    debugMode = paramNode->GetcheckBoxDebug();

  if(!paramNode || !this->mrmlScene() || !node || !d->ModuleWindowInitialized) {
    if(debugMode) {
      std::cerr << "Deformed Image Node: termination condiation fulfilled" << std::endl;
      std::cerr << "ParamNode: " << paramNode << std::endl;
      std::cerr << "this mrmlScene: " << this->mrmlScene() << std::endl;
      std::cerr << "Node: " << node << std::endl;
      std::cerr << "ModuleWindowInitialized: " << d->ModuleWindowInitialized << std::endl << std::endl;
    }
    return;
  }
  paramNode->DisableModifiedEventOn();
  paramNode->SetAndObserveDeformedImageNodeID(node->GetID());
  paramNode->DisableModifiedEventOff();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onDeformedImageNodeAddedByUser(vtkMRMLNode* node) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);
  if(!node) {
    return;
  }
  std::cerr << "Output Node is added by the User" << std::endl;
  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  paramNode->SetAndObserveDeformedImageNodeID(node->GetID());
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onDeformationFieldChanged(vtkMRMLNode* node) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  bool debugMode = false;
  if(paramNode)
    debugMode = paramNode->GetcheckBoxDebug();

  if(!paramNode || !this->mrmlScene() || !node || !d->ModuleWindowInitialized) {
    if(debugMode) {
      std::cerr << "Deformation Field Node: termination condiation fulfilled" << std::endl;
      std::cerr << "ParamNode: " << paramNode << std::endl;
      std::cerr << "this mrmlScene: " << this->mrmlScene() << std::endl;
      std::cerr << "Node: " << node << std::endl;
      std::cerr << "ModuleWindowInitialized: " << d->ModuleWindowInitialized << std::endl << std::endl;
    }
    return;
  }
  paramNode->DisableModifiedEventOn();
  paramNode->SetAndObserveDeformationFieldID(node->GetID());
  paramNode->DisableModifiedEventOff();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onDeformationFieldAddedByUser(vtkMRMLNode* node) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);
  if(!node)
    return;

  std::cerr << "Deformation field is added by the User" << std::endl;
  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  paramNode->SetAndObserveDeformationFieldID(node->GetID());
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onFiducialPointsNodeChanged(vtkMRMLNode* node) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();  
  bool debugMode = false;
  if(paramNode)
    debugMode = paramNode->GetcheckBoxDebug();

  if(!paramNode || !this->mrmlScene() || !node || !d->ModuleWindowInitialized) {
    if(debugMode){
      std::cerr << "Fiducial Point Node: termination condiation fulfilled" << std::endl;
      std::cerr << "ParamNode: " << paramNode << std::endl;
      std::cerr << "this mrmlScene: " << this->mrmlScene() << std::endl;
      std::cerr << "Node: " << node << std::endl;
      std::cerr << "ModuleWindowInitialized: " << d->ModuleWindowInitialized << std::endl << std::endl;
    }
    return;
  }
  paramNode->DisableModifiedEventOn();
  paramNode->SetAndObserveFiducialPointsID(node->GetID());
  paramNode->DisableModifiedEventOff();
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onFiducialPointsNodeAddedByUser(vtkMRMLNode* node) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);
  if(!node)
    return;

  std::cerr << "Fiducial Point Node is added by the User" << std::endl;
  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  paramNode->SetAndObserveFiducialPointsID(node->GetID());
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onFeatureletsSizeChanged(int value) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
      return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetFeatureletsSize(value);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Featurelet Size - Value changed to: " << value << std::endl;
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onSearchRegionSizeChanged(int value) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetSearchRegionSize(value);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Searchregion Size - Value changed to: " << value << std::endl;
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onFeatureletsSizeZChanged(int value) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
      return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetFeatureletsSizeZ(value);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Featurelet Size Z - Value changed to: " << value << std::endl;
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onSearchRegionSizeZChanged(int value) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetSearchRegionSizeZ(value);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Searchregion Size Z - Value changed to: " << value << std::endl;
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onMaxStepLengthChanged(double value) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetMaxStepLength(value);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Max Step Lenght - Value changed to: " << value << std::endl;
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onMinStepLengthChanged(double value) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetMinStepLength(value);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Min Step Lenght - Value changed to: " << value << std::endl;
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onNumberIterationsChanged(int value) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetNumberIterations(value);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Number of Iterations - Value changed to: " << value << std::endl;
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onSimilarityMeasureChanged(bool correl) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
      return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetUseCorrelationForSimilarity(correl);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Similarity Measure - Correl.: " << correl << std::endl;
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::onInterpolationTypeChanged(bool linear) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetUseLinearCorrelation(linear);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Interpolation type - Linear.: " << linear << std::endl;
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModuleWidget::oncheckBoxFiducialChanged(bool clicked) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetcheckBoxFiducial(clicked);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Is Fiducial Checkbox clicked? " << clicked << std::endl;
}

void qSlicerFeatureletRegistrationModuleWidget::oncheckBoxDebugChanged(bool clicked) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetcheckBoxDebug(clicked);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Is Debug Checkbox clicked? " << clicked << std::endl;
}

void qSlicerFeatureletRegistrationModuleWidget::oncheckBoxRigidChanged(bool clicked) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetcheckBoxRigid(clicked);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Is Rigid Checkbox clicked? " << clicked << std::endl;
}

void qSlicerFeatureletRegistrationModuleWidget::oncheckBoxZDifferentChanged(bool clicked) {
  Q_D(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode* paramNode = d->logic()->GetFeatureletRegistrationNode();
  if ( !paramNode || !this->mrmlScene())
    return;

  bool debugMode = paramNode->GetcheckBoxDebug();

  paramNode->DisableModifiedEventOn();
  paramNode->SetcheckBoxZDifferent(clicked);
  paramNode->DisableModifiedEventOff();
  if(debugMode)
    std::cerr << "Is Z Different Checkbox clicked? " << clicked << std::endl;
}

// Helping Methode taken from SlicerRTCommon
//----------------------------------------------------------------------------
bool qSlicerFeatureletRegistrationModuleWidget::IsStringNullOrEmpty(char* aString) {
  if (aString == NULL) {
    return true;
  }
  else if (strcmp(aString, "") == 0) {
    return true;
  }
  return false;
}
