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

#ifndef __qSlicerFeatureletRegistrationModuleWidget_h
#define __qSlicerFeatureletRegistrationModuleWidget_h

// SlicerQt includes
#include "qSlicerAbstractModuleWidget.h"
#include "qSlicerFeatureletRegistrationModuleExport.h"

class qSlicerFeatureletRegistrationModuleWidgetPrivate;
class vtkMRMLNode;
class vtkMRMLFeatureletRegistrationNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_FEATURELETREGISTRATION_EXPORT qSlicerFeatureletRegistrationModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerFeatureletRegistrationModuleWidget(QWidget *parent=0);
  virtual ~qSlicerFeatureletRegistrationModuleWidget();

  virtual void enter();

public slots:
  virtual void setMRMLScene(vtkMRMLScene*);
  void onSceneImportedEvent();
  void setFeatureletRegistrationNode(vtkMRMLNode *node);
  void updateWidgetFromMRML();


protected:
  QScopedPointer<qSlicerFeatureletRegistrationModuleWidgetPrivate> d_ptr;

  virtual void setup();
  void onEnter();

  //void updateButtonsState();
  //void updateParameters();
  //void refreshOutputBaseName();

  void initializeFeatureletRegistrationNode(vtkMRMLScene*);


protected slots:
  void onFixedImageNodeChanged(vtkMRMLNode *node);
  void onMovingImageNodeChanged(vtkMRMLNode *node);
  void onDeformedImageNodeChanged(vtkMRMLNode *node);
  void onDeformedImageNodeAddedByUser(vtkMRMLNode* node);
  void onDeformationFieldChanged(vtkMRMLNode* node);
  void onDeformationFieldAddedByUser(vtkMRMLNode* node);
  void onFiducialPointsNodeChanged(vtkMRMLNode* node);
  void onFiducialPointsNodeAddedByUser(vtkMRMLNode* node);

  void onFeatureletsSizeChanged(int value);
  void onSearchRegionSizeChanged(int value);
  void onFeatureletsSizeZChanged(int value);
  void onSearchRegionSizeZChanged(int value);
  void onMaxStepLengthChanged(double value);
  void onMinStepLengthChanged(double value);
  void onNumberIterationsChanged(int value);
  void onSimilarityMeasureChanged(bool correl);
  void onInterpolationTypeChanged(bool linear);
  void oncheckBoxFiducialChanged(bool clicked);
  void oncheckBoxDebugChanged(bool clicked);
  void oncheckBoxRigidChanged(bool clicked);
  void oncheckBoxZDifferentChanged(bool clicked);

  void onRunClicked();
  void onShowVolume();
  void onShowVolume2();

  void onLogicModified();

private:
  Q_DECLARE_PRIVATE(qSlicerFeatureletRegistrationModuleWidget);
  Q_DISABLE_COPY(qSlicerFeatureletRegistrationModuleWidget);

  vtkMRMLFeatureletRegistrationNode *FeatureletRegistrationNode;
  bool IsStringNullOrEmpty(char* aString);
};

#endif
