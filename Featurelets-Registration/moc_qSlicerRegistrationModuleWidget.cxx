/****************************************************************************
** Meta object code from reading C++ file 'qSlicerRegistrationModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Slicer-Featurelets/Featurelets-Registration/qSlicerRegistrationModuleWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerRegistrationModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qSlicerRegistrationModuleWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      61,   32,   32,   32, 0x0a,
      89,   84,   32,   32, 0x0a,
     123,   32,   32,   32, 0x0a,
     146,   84,   32,   32, 0x09,
     184,   84,   32,   32, 0x09,
     223,   84,   32,   32, 0x09,
     264,   84,   32,   32, 0x09,
     309,   84,   32,   32, 0x09,
     349,   84,   32,   32, 0x09,
     393,   84,   32,   32, 0x09,
     435,   84,   32,   32, 0x09,
     487,  481,   32,   32, 0x09,
     517,  481,   32,   32, 0x09,
     548,  481,   32,   32, 0x09,
     579,  481,   32,   32, 0x09,
     611,  481,   32,   32, 0x09,
     642,  481,   32,   32, 0x09,
     673,  481,   32,   32, 0x09,
     711,  704,   32,   32, 0x09,
     751,  744,   32,   32, 0x09,
     792,  784,   32,   32, 0x09,
     824,  784,   32,   32, 0x09,
     853,  784,   32,   32, 0x09,
     882,  784,   32,   32, 0x09,
     916,   32,   32,   32, 0x09,
     931,   32,   32,   32, 0x09,
     946,   32,   32,   32, 0x09,
     962,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qSlicerRegistrationModuleWidget[] = {
    "qSlicerRegistrationModuleWidget\0\0"
    "setMRMLScene(vtkMRMLScene*)\0"
    "onSceneImportedEvent()\0node\0"
    "setRegistrationNode(vtkMRMLNode*)\0"
    "updateWidgetFromMRML()\0"
    "onFixedImageNodeChanged(vtkMRMLNode*)\0"
    "onMovingImageNodeChanged(vtkMRMLNode*)\0"
    "onDeformedImageNodeChanged(vtkMRMLNode*)\0"
    "onDeformedImageNodeAddedByUser(vtkMRMLNode*)\0"
    "onDeformationFieldChanged(vtkMRMLNode*)\0"
    "onDeformationFieldAddedByUser(vtkMRMLNode*)\0"
    "onFiducialPointsNodeChanged(vtkMRMLNode*)\0"
    "onFiducialPointsNodeAddedByUser(vtkMRMLNode*)\0"
    "value\0onFeatureletsSizeChanged(int)\0"
    "onSearchRegionSizeChanged(int)\0"
    "onFeatureletsSizeZChanged(int)\0"
    "onSearchRegionSizeZChanged(int)\0"
    "onMaxStepLengthChanged(double)\0"
    "onMinStepLengthChanged(double)\0"
    "onNumberIterationsChanged(int)\0correl\0"
    "onSimilarityMeasureChanged(bool)\0"
    "linear\0onInterpolationTypeChanged(bool)\0"
    "clicked\0oncheckBoxFiducialChanged(bool)\0"
    "oncheckBoxDebugChanged(bool)\0"
    "oncheckBoxRigidChanged(bool)\0"
    "oncheckBoxZDifferentChanged(bool)\0"
    "onRunClicked()\0onShowVolume()\0"
    "onShowVolume2()\0onLogicModified()\0"
};

void qSlicerRegistrationModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qSlicerRegistrationModuleWidget *_t = static_cast<qSlicerRegistrationModuleWidget *>(_o);
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->onSceneImportedEvent(); break;
        case 2: _t->setRegistrationNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->updateWidgetFromMRML(); break;
        case 4: _t->onFixedImageNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 5: _t->onMovingImageNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 6: _t->onDeformedImageNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 7: _t->onDeformedImageNodeAddedByUser((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 8: _t->onDeformationFieldChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 9: _t->onDeformationFieldAddedByUser((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 10: _t->onFiducialPointsNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 11: _t->onFiducialPointsNodeAddedByUser((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 12: _t->onFeatureletsSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->onSearchRegionSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onFeatureletsSizeZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onSearchRegionSizeZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->onMaxStepLengthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->onMinStepLengthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->onNumberIterationsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->onSimilarityMeasureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->onInterpolationTypeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->oncheckBoxFiducialChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->oncheckBoxDebugChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->oncheckBoxRigidChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->oncheckBoxZDifferentChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->onRunClicked(); break;
        case 26: _t->onShowVolume(); break;
        case 27: _t->onShowVolume2(); break;
        case 28: _t->onLogicModified(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qSlicerRegistrationModuleWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qSlicerRegistrationModuleWidget::staticMetaObject = {
    { &qSlicerAbstractModuleWidget::staticMetaObject, qt_meta_stringdata_qSlicerRegistrationModuleWidget,
      qt_meta_data_qSlicerRegistrationModuleWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qSlicerRegistrationModuleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qSlicerRegistrationModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qSlicerRegistrationModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerRegistrationModuleWidget))
        return static_cast<void*>(const_cast< qSlicerRegistrationModuleWidget*>(this));
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerRegistrationModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
