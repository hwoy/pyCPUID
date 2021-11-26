#define PY_SSIZE_T_CLEAN
#include <Python.h>

#define __XCPUID_PYTHON_MODULE__
#include "CPUID.c"

static PyObject *pygetCPUManID(PyObject *self)
{
   CPUMANIDSTR cpustr;
   return Py_BuildValue("s", getCPUManID(cpustr));
}

static PyObject *pygetCPUBrand(PyObject *self)
{
   CPUBRANDSTR cpustr;
   return Py_BuildValue("s", getCPUBrand(cpustr));
}

static PyObject *pyCPUID(PyObject *self, PyObject *args)
{
	struct REG reg;
	if (!PyArg_ParseTuple(args, "IIII",
	&reg.eax.value,&reg.ebx.value,&reg.ecx.value,&reg.edx.value))
		return NULL;
	
	const struct REG oreg=CPUID(&reg);
	
	return Py_BuildValue("(IIII)",
	oreg.eax.value, oreg.ebx.value, oreg.ecx.value, oreg.edx.value);
}


static PyMethodDef pyCPUID_funcs[] = {
   {"pygetCPUManID", (PyCFunction)pygetCPUManID, 
	METH_NOARGS, "pygetCPUManID( ): get a CPU Manufacturer ID string\n"},
	
   {"pygetCPUBrand", (PyCFunction)pygetCPUBrand, 
	METH_NOARGS, "pygetCPUBrand( ): get a CPU Brand string\n"},
	
   {"pyCPUID", (PyCFunction)pyCPUID, 
	METH_VARARGS, "pyCPUID(eax,ebx,ecx,edx): get a CPU raw value\n"},
	
      {NULL}
};

static const char pyCPUID_docs[] =
   "pyCPUID is CPUID module\n";

static struct PyModuleDef pyCPUID_module = {
   PyModuleDef_HEAD_INIT,
   "pyCPUID",   /* name of module */
   pyCPUID_docs, /* module documentation, may be NULL */
   -1,       /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables. */
   pyCPUID_funcs
};


PyMODINIT_FUNC
PyInit_pyCPUID(void)
{
	static PyObject *pyCPUIDError;
    PyObject *m;

    m = PyModule_Create(&pyCPUID_module);
    if (m == NULL)
        return NULL;

    pyCPUIDError = PyErr_NewException("pyCPUID.error", NULL, NULL);
    Py_XINCREF(pyCPUIDError);
    if (PyModule_AddObject(m, "error", pyCPUIDError) < 0) {
        Py_XDECREF(pyCPUIDError);
        Py_CLEAR(pyCPUIDError);
        Py_DECREF(m);
        return NULL;
    }

    return m;
}

