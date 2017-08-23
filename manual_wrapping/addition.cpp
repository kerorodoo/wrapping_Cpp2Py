#include <Python.h>


static int addition(int* a, int* b)
{
    printf("addition: %d + %d =\n", *a, *b);
    printf("a: %p\n", a);
    printf("b: %p\n", b);

    return *a + *b;
}


static PyObject* addition_wrapper(PyObject* self, PyObject* args)
{
    int a;
    int b;
    int result;
    PyObject* ret;


    // parse arguments
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    printf("a: %p\n", &a);
    printf("b: %p\n", &b);

    // run the actual function 
    result = addition(&a, &b);

    // build the result string into a Python Object
    ret = PyInt_FromLong(result);
    //Py_RETURN_NONE;
    return ret;
}

static PyMethodDef AdditionMethods[] = {
    {"addition", addition_wrapper, METH_VARARGS, "Addition wrapper demo"},
    {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC initaddition(void){
    (void) Py_InitModule("addition", AdditionMethods);
}


