#include <Python.h>
#include <numpy/arrayobject.h>

/**
 * import *.h from /src
 **/

/**
 * describe the module
 **/
static char module_description[] = "";

/**
 * implement and describe functions
 *
 * static char func_description[] = "";
 * static PyObject *module_func(PyObject *self, PyObject *args) {}
 **/

/**
 * list implemented functions
 *
 * {"func", module_func, METH_VARARGS, func_description}
 **/
static PyMethodDef module_methods[] = {
    {NULL, NULL, 0, NULL}
};

/**
 * init the module
 *
 * PyMODINIT_FUNC init_module(void)
 * {
 *     PyObject *m = Py_InitModule3("_module", module_methods, module_description);
 *     if (m == NULL) {
 *         // no good
 *         return;
 *     }
 *
 *     import_array();
 * }
 **/

