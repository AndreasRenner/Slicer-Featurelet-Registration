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
#include <QtPlugin>

// Slicer includes
#include <qSlicerCoreApplication.h>
#include <qSlicerModuleManager.h>

// FeatureletRegistration Logic includes
#include <vtkSlicerFeatureletRegistrationLogic.h>
#include <vtkSlicerVolumesLogic.h>

// FeatureletRegistration includes
#include "qSlicerFeatureletRegistrationModule.h"
#include "qSlicerFeatureletRegistrationModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerFeatureletRegistrationModule, qSlicerFeatureletRegistrationModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerFeatureletRegistrationModulePrivate
{
public:
  qSlicerFeatureletRegistrationModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerFeatureletRegistrationModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerFeatureletRegistrationModulePrivate::qSlicerFeatureletRegistrationModulePrivate() {
}

//-----------------------------------------------------------------------------
// qSlicerFeatureletRegistrationModule methods

//-----------------------------------------------------------------------------
qSlicerFeatureletRegistrationModule::qSlicerFeatureletRegistrationModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerFeatureletRegistrationModulePrivate) {
}

//-----------------------------------------------------------------------------
qSlicerFeatureletRegistrationModule::~qSlicerFeatureletRegistrationModule() {
}

//-----------------------------------------------------------------------------
QString qSlicerFeatureletRegistrationModule::helpText() const {
  QString help =
    "The ,,Featurelet-Registration'' module uses pixeltype short. To convert an image from another "
    "pixeltype use e.g. the module ,,Cast Scalar Volume''.<br>"
    "To threshold an image use e.g. the module ,,Threshold Scalar Volume''.<br>"
    "For initial alignment of fixed and moving image e.g. the module ,,Expert Automated Registration'' "
    "can be used.<br>"
    "If only a subvolume of the whole image should be deformed use the module ,,Crop Volume''.<br>"
    "The output deformation field can be visualized using the module ,,Transforms''.<br><br>"
    "For more detailed documentation see <a href=\"http://slicer.org/slicerWiki/index.php/Documentation/4.4/Extensions/Slicer-Featurelets\">http://slicer.org/Slicer-Featurelets</a>.";
  return help;
}

//-----------------------------------------------------------------------------
QString qSlicerFeatureletRegistrationModule::acknowledgementText() const {
  QString acknowledgement =
    "The ,,Featurelet-Registration'' module was developed as a Master Thesis at AKH Vienna "
    "under supervision of Univ.-Prof. Dietmar Georg and Hugo Furtado.<br>"
    "The idea of the Featurelet algorithm is based on Soehn, M. et al. (2008). "
    "The ,,Featurelet-Registration'' module is an implementation of the algorithm developed by "
    "Fabri, D. et al. (2014).<br>";
  return acknowledgement;
}

//-----------------------------------------------------------------------------
QStringList qSlicerFeatureletRegistrationModule::contributors() const {
  QStringList moduleContributors;
  moduleContributors << QString("Andreas Renner (Vienna UT)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerFeatureletRegistrationModule::icon() const {
  return QIcon(":/Icons/Registration.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerFeatureletRegistrationModule::categories() const {
  return QStringList() << "Registration";
}

//-----------------------------------------------------------------------------
QStringList qSlicerFeatureletRegistrationModule::dependencies() const {
  return QStringList() << "Volumes";
}

//-----------------------------------------------------------------------------
void qSlicerFeatureletRegistrationModule::setup() {
  this->Superclass::setup();

  vtkSlicerFeatureletRegistrationLogic* FeatureletRegistrationLogic =
    vtkSlicerFeatureletRegistrationLogic::SafeDownCast(this->logic());

  qSlicerAbstractCoreModule* volumesModule =
    qSlicerCoreApplication::application()->moduleManager()->module("Volumes");
  if (volumesModule) {
    vtkSlicerVolumesLogic* volumesLogic =
      vtkSlicerVolumesLogic::SafeDownCast(volumesModule->logic());
    FeatureletRegistrationLogic->SetVolumesLogic(volumesLogic);
  }
  else {
    qWarning() << "Volumes module is not found";
  }
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerFeatureletRegistrationModule::createWidgetRepresentation() {
  return new qSlicerFeatureletRegistrationModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerFeatureletRegistrationModule::createLogic() {
  return vtkSlicerFeatureletRegistrationLogic::New();
}
