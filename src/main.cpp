
#include <iostream>
#include "MathFunctions.h"

#include "MyAppConfig.h"

#include <Python.h>
#include "Playground.h"
#include <vector>
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
    call_hello_world("Hello", std::vector<std::string>{"Joe"});
    Py_Finalize();

    return 0;
}