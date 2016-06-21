// python wrapper for vtkMRMLRegistrationNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkMRMLRegistrationNode.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMRMLRegistrationNode(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMRMLRegistrationNodeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMRMLNodeNew
extern "C" { PyObject *PyVTKClass_vtkMRMLNodeNew(const char *); }
#define DECLARED_PyVTKClass_vtkMRMLNodeNew
#endif

static const char **PyvtkMRMLRegistrationNode_Doc();


static PyObject *
PyvtkMRMLRegistrationNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMRMLRegistrationNode::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLRegistrationNode::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMRMLRegistrationNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLRegistrationNode::NewInstance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMRMLRegistrationNode *tempr = vtkMRMLRegistrationNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLRegistrationNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  vtkMRMLNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLRegistrationNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetAndObserveFixedImageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveFixedImageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAndObserveFixedImageNodeID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetAndObserveFixedImageNodeID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetAndObserveMovingImageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveMovingImageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAndObserveMovingImageNodeID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetAndObserveMovingImageNodeID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetAndObserveDeformedImageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveDeformedImageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAndObserveDeformedImageNodeID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetAndObserveDeformedImageNodeID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetAndObserveDeformationFieldID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveDeformationFieldID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAndObserveDeformationFieldID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetAndObserveDeformationFieldID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetAndObserveFiducialPointsID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveFiducialPointsID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAndObserveFiducialPointsID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetAndObserveFiducialPointsID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetAndObserveROINodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveROINodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAndObserveROINodeID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetAndObserveROINodeID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetFixedImageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedImageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFixedImageNodeID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetFixedImageNodeID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetFixedImageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedImageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFixedImageNodeID() :
      op->vtkMRMLRegistrationNode::GetFixedImageNodeID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetMovingImageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMovingImageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMovingImageNodeID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetMovingImageNodeID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetMovingImageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMovingImageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMovingImageNodeID() :
      op->vtkMRMLRegistrationNode::GetMovingImageNodeID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetDeformedImageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeformedImageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeformedImageNodeID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetDeformedImageNodeID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetDeformedImageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeformedImageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDeformedImageNodeID() :
      op->vtkMRMLRegistrationNode::GetDeformedImageNodeID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetDeformationFieldID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeformationFieldID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeformationFieldID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetDeformationFieldID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetDeformationFieldID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeformationFieldID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDeformationFieldID() :
      op->vtkMRMLRegistrationNode::GetDeformationFieldID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetFiducialPointsID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialPointsID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFiducialPointsID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetFiducialPointsID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetFiducialPointsID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialPointsID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFiducialPointsID() :
      op->vtkMRMLRegistrationNode::GetFiducialPointsID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetROINodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetROINodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetROINodeID(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetROINodeID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetROINodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROINodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetROINodeID() :
      op->vtkMRMLRegistrationNode::GetROINodeID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetROIcheckBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetROIcheckBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetROIcheckBox(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetROIcheckBox(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetROIcheckBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROIcheckBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetROIcheckBox() :
      op->vtkMRMLRegistrationNode::GetROIcheckBox());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_ROIcheckBoxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ROIcheckBoxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ROIcheckBoxOn();
      }
    else
      {
      op->vtkMRMLRegistrationNode::ROIcheckBoxOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_ROIcheckBoxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ROIcheckBoxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ROIcheckBoxOff();
      }
    else
      {
      op->vtkMRMLRegistrationNode::ROIcheckBoxOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetFeatureletsSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureletsSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFeatureletsSize() :
      op->vtkMRMLRegistrationNode::GetFeatureletsSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetFeatureletsSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureletsSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureletsSize(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetFeatureletsSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetSearchRegionSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSearchRegionSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSearchRegionSize() :
      op->vtkMRMLRegistrationNode::GetSearchRegionSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetSearchRegionSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSearchRegionSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSearchRegionSize(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetSearchRegionSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetFeatureletsSizeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureletsSizeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFeatureletsSizeZ() :
      op->vtkMRMLRegistrationNode::GetFeatureletsSizeZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetFeatureletsSizeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureletsSizeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureletsSizeZ(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetFeatureletsSizeZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetSearchRegionSizeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSearchRegionSizeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSearchRegionSizeZ() :
      op->vtkMRMLRegistrationNode::GetSearchRegionSizeZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetSearchRegionSizeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSearchRegionSizeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSearchRegionSizeZ(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetSearchRegionSizeZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetMaxStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaxStepLength() :
      op->vtkMRMLRegistrationNode::GetMaxStepLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetMaxStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxStepLength(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetMaxStepLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetMinStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinStepLength() :
      op->vtkMRMLRegistrationNode::GetMinStepLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetMinStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinStepLength(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetMinStepLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetNumberIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberIterations() :
      op->vtkMRMLRegistrationNode::GetNumberIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetNumberIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberIterations(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetNumberIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_Getprogress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Getprogress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Getprogress() :
      op->vtkMRMLRegistrationNode::Getprogress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_Setprogress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Setprogress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Setprogress(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::Setprogress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetUseCorrelationForSimilarity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCorrelationForSimilarity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseCorrelationForSimilarity() :
      op->vtkMRMLRegistrationNode::GetUseCorrelationForSimilarity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetUseCorrelationForSimilarity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCorrelationForSimilarity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCorrelationForSimilarity(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetUseCorrelationForSimilarity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_UseCorrelationForSimilarityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCorrelationForSimilarityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCorrelationForSimilarityOn();
      }
    else
      {
      op->vtkMRMLRegistrationNode::UseCorrelationForSimilarityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_UseCorrelationForSimilarityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCorrelationForSimilarityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCorrelationForSimilarityOff();
      }
    else
      {
      op->vtkMRMLRegistrationNode::UseCorrelationForSimilarityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetUseLinearCorrelation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLinearCorrelation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseLinearCorrelation() :
      op->vtkMRMLRegistrationNode::GetUseLinearCorrelation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetUseLinearCorrelation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLinearCorrelation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseLinearCorrelation(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetUseLinearCorrelation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_UseLinearCorrelationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLinearCorrelationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLinearCorrelationOn();
      }
    else
      {
      op->vtkMRMLRegistrationNode::UseLinearCorrelationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_UseLinearCorrelationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLinearCorrelationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLinearCorrelationOff();
      }
    else
      {
      op->vtkMRMLRegistrationNode::UseLinearCorrelationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetcheckBoxFiducial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetcheckBoxFiducial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetcheckBoxFiducial() :
      op->vtkMRMLRegistrationNode::GetcheckBoxFiducial());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetcheckBoxFiducial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetcheckBoxFiducial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetcheckBoxFiducial(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetcheckBoxFiducial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_checkBoxFiducialOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "checkBoxFiducialOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->checkBoxFiducialOn();
      }
    else
      {
      op->vtkMRMLRegistrationNode::checkBoxFiducialOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_checkBoxFiducialOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "checkBoxFiducialOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->checkBoxFiducialOff();
      }
    else
      {
      op->vtkMRMLRegistrationNode::checkBoxFiducialOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetcheckBoxDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetcheckBoxDebug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetcheckBoxDebug() :
      op->vtkMRMLRegistrationNode::GetcheckBoxDebug());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetcheckBoxDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetcheckBoxDebug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetcheckBoxDebug(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetcheckBoxDebug(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_checkBoxDebugOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "checkBoxDebugOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->checkBoxDebugOn();
      }
    else
      {
      op->vtkMRMLRegistrationNode::checkBoxDebugOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_checkBoxDebugOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "checkBoxDebugOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->checkBoxDebugOff();
      }
    else
      {
      op->vtkMRMLRegistrationNode::checkBoxDebugOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetcheckBoxRigid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetcheckBoxRigid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetcheckBoxRigid() :
      op->vtkMRMLRegistrationNode::GetcheckBoxRigid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetcheckBoxRigid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetcheckBoxRigid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetcheckBoxRigid(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetcheckBoxRigid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_checkBoxRigidOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "checkBoxRigidOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->checkBoxRigidOn();
      }
    else
      {
      op->vtkMRMLRegistrationNode::checkBoxRigidOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_checkBoxRigidOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "checkBoxRigidOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->checkBoxRigidOff();
      }
    else
      {
      op->vtkMRMLRegistrationNode::checkBoxRigidOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_GetcheckBoxZDifferent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetcheckBoxZDifferent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetcheckBoxZDifferent() :
      op->vtkMRMLRegistrationNode::GetcheckBoxZDifferent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_SetcheckBoxZDifferent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetcheckBoxZDifferent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetcheckBoxZDifferent(temp0);
      }
    else
      {
      op->vtkMRMLRegistrationNode::SetcheckBoxZDifferent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_checkBoxZDifferentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "checkBoxZDifferentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->checkBoxZDifferentOn();
      }
    else
      {
      op->vtkMRMLRegistrationNode::checkBoxZDifferentOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_checkBoxZDifferentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "checkBoxZDifferentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->checkBoxZDifferentOff();
      }
    else
      {
      op->vtkMRMLRegistrationNode::checkBoxZDifferentOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMRMLRegistrationNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRegistrationNode *op = static_cast<vtkMRMLRegistrationNode *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateReferenceID(temp0, temp1);
      }
    else
      {
      op->vtkMRMLRegistrationNode::UpdateReferenceID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMRMLRegistrationNode_Methods[] = {
  {(char*)"GetClassName", PyvtkMRMLRegistrationNode_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMRMLRegistrationNode_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMRMLRegistrationNode_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMRMLRegistrationNode\nC++: vtkMRMLRegistrationNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMRMLRegistrationNode_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMRMLRegistrationNode\nC++: vtkMRMLRegistrationNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateNodeInstance", PyvtkMRMLRegistrationNode_CreateNodeInstance, METH_VARARGS,
   (char*)"V.CreateNodeInstance() -> vtkMRMLNode\nC++: virtual vtkMRMLNode *CreateNodeInstance()\n\n"},
  {(char*)"Copy", PyvtkMRMLRegistrationNode_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkMRMLNode)\nC++: virtual void Copy(vtkMRMLNode *node)\n\n"},
  {(char*)"GetNodeTagName", PyvtkMRMLRegistrationNode_GetNodeTagName, METH_VARARGS,
   (char*)"V.GetNodeTagName() -> string\nC++: virtual const char *GetNodeTagName()\n\n"},
  {(char*)"SetAndObserveFixedImageNodeID", PyvtkMRMLRegistrationNode_SetAndObserveFixedImageNodeID, METH_VARARGS,
   (char*)"V.SetAndObserveFixedImageNodeID(string)\nC++: void SetAndObserveFixedImageNodeID(const char *ID)\n\n"},
  {(char*)"SetAndObserveMovingImageNodeID", PyvtkMRMLRegistrationNode_SetAndObserveMovingImageNodeID, METH_VARARGS,
   (char*)"V.SetAndObserveMovingImageNodeID(string)\nC++: void SetAndObserveMovingImageNodeID(const char *ID)\n\n"},
  {(char*)"SetAndObserveDeformedImageNodeID", PyvtkMRMLRegistrationNode_SetAndObserveDeformedImageNodeID, METH_VARARGS,
   (char*)"V.SetAndObserveDeformedImageNodeID(string)\nC++: void SetAndObserveDeformedImageNodeID(const char *ID)\n\n"},
  {(char*)"SetAndObserveDeformationFieldID", PyvtkMRMLRegistrationNode_SetAndObserveDeformationFieldID, METH_VARARGS,
   (char*)"V.SetAndObserveDeformationFieldID(string)\nC++: void SetAndObserveDeformationFieldID(const char *ID)\n\n"},
  {(char*)"SetAndObserveFiducialPointsID", PyvtkMRMLRegistrationNode_SetAndObserveFiducialPointsID, METH_VARARGS,
   (char*)"V.SetAndObserveFiducialPointsID(string)\nC++: void SetAndObserveFiducialPointsID(const char *ID)\n\n"},
  {(char*)"SetAndObserveROINodeID", PyvtkMRMLRegistrationNode_SetAndObserveROINodeID, METH_VARARGS,
   (char*)"V.SetAndObserveROINodeID(string)\nC++: void SetAndObserveROINodeID(const char *ID)\n\n"},
  {(char*)"SetFixedImageNodeID", PyvtkMRMLRegistrationNode_SetFixedImageNodeID, METH_VARARGS,
   (char*)"V.SetFixedImageNodeID(string)\nC++: void SetFixedImageNodeID(char *)\n\n\n"},
  {(char*)"GetFixedImageNodeID", PyvtkMRMLRegistrationNode_GetFixedImageNodeID, METH_VARARGS,
   (char*)"V.GetFixedImageNodeID() -> string\nC++: char *GetFixedImageNodeID()\n\n\n"},
  {(char*)"SetMovingImageNodeID", PyvtkMRMLRegistrationNode_SetMovingImageNodeID, METH_VARARGS,
   (char*)"V.SetMovingImageNodeID(string)\nC++: void SetMovingImageNodeID(char *)\n\n\n"},
  {(char*)"GetMovingImageNodeID", PyvtkMRMLRegistrationNode_GetMovingImageNodeID, METH_VARARGS,
   (char*)"V.GetMovingImageNodeID() -> string\nC++: char *GetMovingImageNodeID()\n\n\n"},
  {(char*)"SetDeformedImageNodeID", PyvtkMRMLRegistrationNode_SetDeformedImageNodeID, METH_VARARGS,
   (char*)"V.SetDeformedImageNodeID(string)\nC++: void SetDeformedImageNodeID(char *)\n\n\n"},
  {(char*)"GetDeformedImageNodeID", PyvtkMRMLRegistrationNode_GetDeformedImageNodeID, METH_VARARGS,
   (char*)"V.GetDeformedImageNodeID() -> string\nC++: char *GetDeformedImageNodeID()\n\n\n"},
  {(char*)"SetDeformationFieldID", PyvtkMRMLRegistrationNode_SetDeformationFieldID, METH_VARARGS,
   (char*)"V.SetDeformationFieldID(string)\nC++: void SetDeformationFieldID(char *)\n\n\n"},
  {(char*)"GetDeformationFieldID", PyvtkMRMLRegistrationNode_GetDeformationFieldID, METH_VARARGS,
   (char*)"V.GetDeformationFieldID() -> string\nC++: char *GetDeformationFieldID()\n\n\n"},
  {(char*)"SetFiducialPointsID", PyvtkMRMLRegistrationNode_SetFiducialPointsID, METH_VARARGS,
   (char*)"V.SetFiducialPointsID(string)\nC++: void SetFiducialPointsID(char *)\n\n\n"},
  {(char*)"GetFiducialPointsID", PyvtkMRMLRegistrationNode_GetFiducialPointsID, METH_VARARGS,
   (char*)"V.GetFiducialPointsID() -> string\nC++: char *GetFiducialPointsID()\n\n\n"},
  {(char*)"SetROINodeID", PyvtkMRMLRegistrationNode_SetROINodeID, METH_VARARGS,
   (char*)"V.SetROINodeID(string)\nC++: void SetROINodeID(char *)\n\n"},
  {(char*)"GetROINodeID", PyvtkMRMLRegistrationNode_GetROINodeID, METH_VARARGS,
   (char*)"V.GetROINodeID() -> string\nC++: char *GetROINodeID()\n\n"},
  {(char*)"SetROIcheckBox", PyvtkMRMLRegistrationNode_SetROIcheckBox, METH_VARARGS,
   (char*)"V.SetROIcheckBox(bool)\nC++: void SetROIcheckBox(bool a)\n\n"},
  {(char*)"GetROIcheckBox", PyvtkMRMLRegistrationNode_GetROIcheckBox, METH_VARARGS,
   (char*)"V.GetROIcheckBox() -> bool\nC++: bool GetROIcheckBox()\n\n"},
  {(char*)"ROIcheckBoxOn", PyvtkMRMLRegistrationNode_ROIcheckBoxOn, METH_VARARGS,
   (char*)"V.ROIcheckBoxOn()\nC++: void ROIcheckBoxOn()\n\n"},
  {(char*)"ROIcheckBoxOff", PyvtkMRMLRegistrationNode_ROIcheckBoxOff, METH_VARARGS,
   (char*)"V.ROIcheckBoxOff()\nC++: void ROIcheckBoxOff()\n\n"},
  {(char*)"GetFeatureletsSize", PyvtkMRMLRegistrationNode_GetFeatureletsSize, METH_VARARGS,
   (char*)"V.GetFeatureletsSize() -> int\nC++: int GetFeatureletsSize()\n\n"},
  {(char*)"SetFeatureletsSize", PyvtkMRMLRegistrationNode_SetFeatureletsSize, METH_VARARGS,
   (char*)"V.SetFeatureletsSize(int)\nC++: void SetFeatureletsSize(int a)\n\n"},
  {(char*)"GetSearchRegionSize", PyvtkMRMLRegistrationNode_GetSearchRegionSize, METH_VARARGS,
   (char*)"V.GetSearchRegionSize() -> int\nC++: int GetSearchRegionSize()\n\n"},
  {(char*)"SetSearchRegionSize", PyvtkMRMLRegistrationNode_SetSearchRegionSize, METH_VARARGS,
   (char*)"V.SetSearchRegionSize(int)\nC++: void SetSearchRegionSize(int a)\n\n"},
  {(char*)"GetFeatureletsSizeZ", PyvtkMRMLRegistrationNode_GetFeatureletsSizeZ, METH_VARARGS,
   (char*)"V.GetFeatureletsSizeZ() -> int\nC++: int GetFeatureletsSizeZ()\n\n"},
  {(char*)"SetFeatureletsSizeZ", PyvtkMRMLRegistrationNode_SetFeatureletsSizeZ, METH_VARARGS,
   (char*)"V.SetFeatureletsSizeZ(int)\nC++: void SetFeatureletsSizeZ(int a)\n\n"},
  {(char*)"GetSearchRegionSizeZ", PyvtkMRMLRegistrationNode_GetSearchRegionSizeZ, METH_VARARGS,
   (char*)"V.GetSearchRegionSizeZ() -> int\nC++: int GetSearchRegionSizeZ()\n\n"},
  {(char*)"SetSearchRegionSizeZ", PyvtkMRMLRegistrationNode_SetSearchRegionSizeZ, METH_VARARGS,
   (char*)"V.SetSearchRegionSizeZ(int)\nC++: void SetSearchRegionSizeZ(int a)\n\n"},
  {(char*)"GetMaxStepLength", PyvtkMRMLRegistrationNode_GetMaxStepLength, METH_VARARGS,
   (char*)"V.GetMaxStepLength() -> float\nC++: double GetMaxStepLength()\n\n"},
  {(char*)"SetMaxStepLength", PyvtkMRMLRegistrationNode_SetMaxStepLength, METH_VARARGS,
   (char*)"V.SetMaxStepLength(float)\nC++: void SetMaxStepLength(double a)\n\n"},
  {(char*)"GetMinStepLength", PyvtkMRMLRegistrationNode_GetMinStepLength, METH_VARARGS,
   (char*)"V.GetMinStepLength() -> float\nC++: double GetMinStepLength()\n\n"},
  {(char*)"SetMinStepLength", PyvtkMRMLRegistrationNode_SetMinStepLength, METH_VARARGS,
   (char*)"V.SetMinStepLength(float)\nC++: void SetMinStepLength(double a)\n\n"},
  {(char*)"GetNumberIterations", PyvtkMRMLRegistrationNode_GetNumberIterations, METH_VARARGS,
   (char*)"V.GetNumberIterations() -> int\nC++: int GetNumberIterations()\n\n"},
  {(char*)"SetNumberIterations", PyvtkMRMLRegistrationNode_SetNumberIterations, METH_VARARGS,
   (char*)"V.SetNumberIterations(int)\nC++: void SetNumberIterations(int a)\n\n"},
  {(char*)"Getprogress", PyvtkMRMLRegistrationNode_Getprogress, METH_VARARGS,
   (char*)"V.Getprogress() -> int\nC++: int Getprogress()\n\n"},
  {(char*)"Setprogress", PyvtkMRMLRegistrationNode_Setprogress, METH_VARARGS,
   (char*)"V.Setprogress(int)\nC++: void Setprogress(int a)\n\n"},
  {(char*)"GetUseCorrelationForSimilarity", PyvtkMRMLRegistrationNode_GetUseCorrelationForSimilarity, METH_VARARGS,
   (char*)"V.GetUseCorrelationForSimilarity() -> bool\nC++: bool GetUseCorrelationForSimilarity()\n\n"},
  {(char*)"SetUseCorrelationForSimilarity", PyvtkMRMLRegistrationNode_SetUseCorrelationForSimilarity, METH_VARARGS,
   (char*)"V.SetUseCorrelationForSimilarity(bool)\nC++: void SetUseCorrelationForSimilarity(bool a)\n\n"},
  {(char*)"UseCorrelationForSimilarityOn", PyvtkMRMLRegistrationNode_UseCorrelationForSimilarityOn, METH_VARARGS,
   (char*)"V.UseCorrelationForSimilarityOn()\nC++: void UseCorrelationForSimilarityOn()\n\n"},
  {(char*)"UseCorrelationForSimilarityOff", PyvtkMRMLRegistrationNode_UseCorrelationForSimilarityOff, METH_VARARGS,
   (char*)"V.UseCorrelationForSimilarityOff()\nC++: void UseCorrelationForSimilarityOff()\n\n"},
  {(char*)"GetUseLinearCorrelation", PyvtkMRMLRegistrationNode_GetUseLinearCorrelation, METH_VARARGS,
   (char*)"V.GetUseLinearCorrelation() -> bool\nC++: bool GetUseLinearCorrelation()\n\n"},
  {(char*)"SetUseLinearCorrelation", PyvtkMRMLRegistrationNode_SetUseLinearCorrelation, METH_VARARGS,
   (char*)"V.SetUseLinearCorrelation(bool)\nC++: void SetUseLinearCorrelation(bool a)\n\n"},
  {(char*)"UseLinearCorrelationOn", PyvtkMRMLRegistrationNode_UseLinearCorrelationOn, METH_VARARGS,
   (char*)"V.UseLinearCorrelationOn()\nC++: void UseLinearCorrelationOn()\n\n"},
  {(char*)"UseLinearCorrelationOff", PyvtkMRMLRegistrationNode_UseLinearCorrelationOff, METH_VARARGS,
   (char*)"V.UseLinearCorrelationOff()\nC++: void UseLinearCorrelationOff()\n\n"},
  {(char*)"GetcheckBoxFiducial", PyvtkMRMLRegistrationNode_GetcheckBoxFiducial, METH_VARARGS,
   (char*)"V.GetcheckBoxFiducial() -> bool\nC++: bool GetcheckBoxFiducial()\n\n"},
  {(char*)"SetcheckBoxFiducial", PyvtkMRMLRegistrationNode_SetcheckBoxFiducial, METH_VARARGS,
   (char*)"V.SetcheckBoxFiducial(bool)\nC++: void SetcheckBoxFiducial(bool a)\n\n"},
  {(char*)"checkBoxFiducialOn", PyvtkMRMLRegistrationNode_checkBoxFiducialOn, METH_VARARGS,
   (char*)"V.checkBoxFiducialOn()\nC++: void checkBoxFiducialOn()\n\n"},
  {(char*)"checkBoxFiducialOff", PyvtkMRMLRegistrationNode_checkBoxFiducialOff, METH_VARARGS,
   (char*)"V.checkBoxFiducialOff()\nC++: void checkBoxFiducialOff()\n\n"},
  {(char*)"GetcheckBoxDebug", PyvtkMRMLRegistrationNode_GetcheckBoxDebug, METH_VARARGS,
   (char*)"V.GetcheckBoxDebug() -> bool\nC++: bool GetcheckBoxDebug()\n\n"},
  {(char*)"SetcheckBoxDebug", PyvtkMRMLRegistrationNode_SetcheckBoxDebug, METH_VARARGS,
   (char*)"V.SetcheckBoxDebug(bool)\nC++: void SetcheckBoxDebug(bool a)\n\n"},
  {(char*)"checkBoxDebugOn", PyvtkMRMLRegistrationNode_checkBoxDebugOn, METH_VARARGS,
   (char*)"V.checkBoxDebugOn()\nC++: void checkBoxDebugOn()\n\n"},
  {(char*)"checkBoxDebugOff", PyvtkMRMLRegistrationNode_checkBoxDebugOff, METH_VARARGS,
   (char*)"V.checkBoxDebugOff()\nC++: void checkBoxDebugOff()\n\n"},
  {(char*)"GetcheckBoxRigid", PyvtkMRMLRegistrationNode_GetcheckBoxRigid, METH_VARARGS,
   (char*)"V.GetcheckBoxRigid() -> bool\nC++: bool GetcheckBoxRigid()\n\n"},
  {(char*)"SetcheckBoxRigid", PyvtkMRMLRegistrationNode_SetcheckBoxRigid, METH_VARARGS,
   (char*)"V.SetcheckBoxRigid(bool)\nC++: void SetcheckBoxRigid(bool a)\n\n"},
  {(char*)"checkBoxRigidOn", PyvtkMRMLRegistrationNode_checkBoxRigidOn, METH_VARARGS,
   (char*)"V.checkBoxRigidOn()\nC++: void checkBoxRigidOn()\n\n"},
  {(char*)"checkBoxRigidOff", PyvtkMRMLRegistrationNode_checkBoxRigidOff, METH_VARARGS,
   (char*)"V.checkBoxRigidOff()\nC++: void checkBoxRigidOff()\n\n"},
  {(char*)"GetcheckBoxZDifferent", PyvtkMRMLRegistrationNode_GetcheckBoxZDifferent, METH_VARARGS,
   (char*)"V.GetcheckBoxZDifferent() -> bool\nC++: bool GetcheckBoxZDifferent()\n\n"},
  {(char*)"SetcheckBoxZDifferent", PyvtkMRMLRegistrationNode_SetcheckBoxZDifferent, METH_VARARGS,
   (char*)"V.SetcheckBoxZDifferent(bool)\nC++: void SetcheckBoxZDifferent(bool a)\n\n"},
  {(char*)"checkBoxZDifferentOn", PyvtkMRMLRegistrationNode_checkBoxZDifferentOn, METH_VARARGS,
   (char*)"V.checkBoxZDifferentOn()\nC++: void checkBoxZDifferentOn()\n\n"},
  {(char*)"checkBoxZDifferentOff", PyvtkMRMLRegistrationNode_checkBoxZDifferentOff, METH_VARARGS,
   (char*)"V.checkBoxZDifferentOff()\nC++: void checkBoxZDifferentOff()\n\n"},
  {(char*)"UpdateReferenceID", PyvtkMRMLRegistrationNode_UpdateReferenceID, METH_VARARGS,
   (char*)"V.UpdateReferenceID(string, string)\nC++: virtual void UpdateReferenceID(const char *oldID,\n    const char *newID)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMRMLRegistrationNode_StaticNew()
{
  return vtkMRMLRegistrationNode::New();
}

PyObject *PyVTKClass_vtkMRMLRegistrationNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMRMLRegistrationNode_StaticNew,
    PyvtkMRMLRegistrationNode_Methods,
    "vtkMRMLRegistrationNode", modulename,
    NULL, NULL,
    PyvtkMRMLRegistrationNode_Doc(),
    PyVTKClass_vtkMRMLNodeNew(modulename));
  return cls;
}

const char **PyvtkMRMLRegistrationNode_Doc()
{
  static const char *docstring[] = {
    "vtkMRMLVolumeRenderingParametersNode - MRML node for storing a slice\nthrough RAS space\n\n",
    "Superclass: vtkMRMLNode\n\n",
    "This node stores the information about the currently selected volume\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMRMLRegistrationNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMRMLRegistrationNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMRMLRegistrationNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

