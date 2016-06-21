// python wrapper for vtkSlicerRegistrationLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkSlicerRegistrationLogic.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSlicerRegistrationLogic(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSlicerRegistrationLogicNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSlicerModuleLogicNew
extern "C" { PyObject *PyVTKClass_vtkSlicerModuleLogicNew(const char *); }
#define DECLARED_PyVTKClass_vtkSlicerModuleLogicNew
#endif

static const char **PyvtkSlicerRegistrationLogic_Doc();


static PyObject *
PyvtkSlicerRegistrationLogic_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerRegistrationLogic *op = static_cast<vtkSlicerRegistrationLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSlicerRegistrationLogic::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSlicerRegistrationLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerRegistrationLogic *op = static_cast<vtkSlicerRegistrationLogic *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerRegistrationLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSlicerRegistrationLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerRegistrationLogic *op = static_cast<vtkSlicerRegistrationLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSlicerRegistrationLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerRegistrationLogic::NewInstance());

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
PyvtkSlicerRegistrationLogic_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSlicerRegistrationLogic *tempr = vtkSlicerRegistrationLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSlicerRegistrationLogic_SetAndObserveRegistrationNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveRegistrationNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerRegistrationLogic *op = static_cast<vtkSlicerRegistrationLogic *>(vp);

  vtkMRMLRegistrationNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLRegistrationNode"))
    {
    if (ap.IsBound())
      {
      op->SetAndObserveRegistrationNode(temp0);
      }
    else
      {
      op->vtkSlicerRegistrationLogic::SetAndObserveRegistrationNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSlicerRegistrationLogic_SetVolumesLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumesLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerRegistrationLogic *op = static_cast<vtkSlicerRegistrationLogic *>(vp);

  vtkSlicerVolumesLogic *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSlicerVolumesLogic"))
    {
    if (ap.IsBound())
      {
      op->SetVolumesLogic(temp0);
      }
    else
      {
      op->vtkSlicerRegistrationLogic::SetVolumesLogic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSlicerRegistrationLogic_GetVolumesLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumesLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerRegistrationLogic *op = static_cast<vtkSlicerRegistrationLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSlicerVolumesLogic *tempr = (ap.IsBound() ?
      op->GetVolumesLogic() :
      op->vtkSlicerRegistrationLogic::GetVolumesLogic());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSlicerRegistrationLogic_RunClicked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RunClicked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerRegistrationLogic *op = static_cast<vtkSlicerRegistrationLogic *>(vp);

  vtkMRMLRegistrationNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLRegistrationNode"))
    {
    int tempr = (ap.IsBound() ?
      op->RunClicked(temp0) :
      op->vtkSlicerRegistrationLogic::RunClicked(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSlicerRegistrationLogic_ShowVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerRegistrationLogic *op = static_cast<vtkSlicerRegistrationLogic *>(vp);

  vtkMRMLRegistrationNode *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLRegistrationNode") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ShowVolume(temp0, temp1) :
      op->vtkSlicerRegistrationLogic::ShowVolume(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSlicerRegistrationLogic_GetRegistrationNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegistrationNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerRegistrationLogic *op = static_cast<vtkSlicerRegistrationLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMRMLRegistrationNode *tempr = (ap.IsBound() ?
      op->GetRegistrationNode() :
      op->vtkSlicerRegistrationLogic::GetRegistrationNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSlicerRegistrationLogic_Methods[] = {
  {(char*)"GetClassName", PyvtkSlicerRegistrationLogic_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSlicerRegistrationLogic_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSlicerRegistrationLogic_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSlicerRegistrationLogic\nC++: vtkSlicerRegistrationLogic *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSlicerRegistrationLogic_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSlicerRegistrationLogic\nC++: vtkSlicerRegistrationLogic *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAndObserveRegistrationNode", PyvtkSlicerRegistrationLogic_SetAndObserveRegistrationNode, METH_VARARGS,
   (char*)"V.SetAndObserveRegistrationNode(vtkMRMLRegistrationNode)\nC++: void SetAndObserveRegistrationNode(\n    vtkMRMLRegistrationNode *node)\n\n"},
  {(char*)"SetVolumesLogic", PyvtkSlicerRegistrationLogic_SetVolumesLogic, METH_VARARGS,
   (char*)"V.SetVolumesLogic(vtkSlicerVolumesLogic)\nC++: void SetVolumesLogic(vtkSlicerVolumesLogic *logic)\n\n"},
  {(char*)"GetVolumesLogic", PyvtkSlicerRegistrationLogic_GetVolumesLogic, METH_VARARGS,
   (char*)"V.GetVolumesLogic() -> vtkSlicerVolumesLogic\nC++: vtkSlicerVolumesLogic *GetVolumesLogic()\n\n"},
  {(char*)"RunClicked", PyvtkSlicerRegistrationLogic_RunClicked, METH_VARARGS,
   (char*)"V.RunClicked(vtkMRMLRegistrationNode) -> int\nC++: int RunClicked(vtkMRMLRegistrationNode *)\n\n"},
  {(char*)"ShowVolume", PyvtkSlicerRegistrationLogic_ShowVolume, METH_VARARGS,
   (char*)"V.ShowVolume(vtkMRMLRegistrationNode, bool) -> int\nC++: int ShowVolume(vtkMRMLRegistrationNode *, bool)\n\n"},
  {(char*)"GetRegistrationNode", PyvtkSlicerRegistrationLogic_GetRegistrationNode, METH_VARARGS,
   (char*)"V.GetRegistrationNode() -> vtkMRMLRegistrationNode\nC++: vtkMRMLRegistrationNode *GetRegistrationNode()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSlicerRegistrationLogic_StaticNew()
{
  return vtkSlicerRegistrationLogic::New();
}

PyObject *PyVTKClass_vtkSlicerRegistrationLogicNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSlicerRegistrationLogic_StaticNew,
    PyvtkSlicerRegistrationLogic_Methods,
    "vtkSlicerRegistrationLogic", modulename,
    NULL, NULL,
    PyvtkSlicerRegistrationLogic_Doc(),
    PyVTKClass_vtkSlicerModuleLogicNew(modulename));
  return cls;
}

const char **PyvtkSlicerRegistrationLogic_Doc()
{
  static const char *docstring[] = {
    "vtkSlicerRegistrationLogic - slicer logic class for volumes\nmanipulation\n\n",
    "Superclass: vtkSlicerModuleLogic\n\n",
    "This class manages the logic associated with reading, saving, and\nchanging propertied of the volumes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSlicerRegistrationLogic(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSlicerRegistrationLogicNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSlicerRegistrationLogic", o) != 0)
    {
    Py_DECREF(o);
    }

#if VTK_SIZEOF_INT < VTK_SIZEOF_LONG
  o = PyInt_FromLong(3);
#else
  o = PyLong_FromUnsignedLong(3);
#endif
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"Dimension", o);
    Py_DECREF(o);
    }
}

