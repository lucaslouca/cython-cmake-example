
#include <iostream>
#include "MathFunctions.h"

#include "MyAppConfig.h"

#include <Python.h>
#include "Playground.h"
#include <string>

int main(int argc, char *argv[])
{

    std::cout << argv[0]
              << " Version "
              << MyApp_VERSION_MAJOR
              << "."
              << MyApp_VERSION_MINOR
              << std::endl;

    if (argc < 2)
    {
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    PyImport_AppendInittab("Playground", PyInit_Playground);
    Py_Initialize();
    PyImport_ImportModule("Playground");

    // PyObject *pMessage, *pNames, *presult;

    // // https://docs.python.org/3/c-api/unicode.html#c.PyUnicode_FromString
    // if (!(pMessage = PyUnicode_FromString("Hello ")))
    // {
    //     return 1;
    // }

    PyObject *pNames;
    if (!(pNames = PyList_New(0)))
    {
        return 1;
    }
    for (int i = 1; i <= 3; i++)
    {
        std::string n = "Name_" + std::to_string(i);
        PyList_Append(pNames, PyUnicode_FromString(n.c_str()));
    }
    // PyObject *pArgs[] = {pMessage, pNames};

    char *pResult = call_hello_world("Hello", pNames);
    std::cout << "Result from Python call: " << pResult << std::endl;
    Py_Finalize();

    return 0;
}