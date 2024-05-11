
#include <iostream>
#include "MathFunctions.h"

#include "MyAppConfig.h"

#include <Python.h>
#include "Playground.h"

// int main(int argc, char *argv[])
// {

//     if (argc < 2)
//     {
//         // report version
//         std::cout << argv[0] << " Version " << Playground_VERSION_MAJOR << "."
//                   << Playground_VERSION_MINOR << std::endl;
//         std::cout << "Usage: " << argv[0] << " number" << std::endl;
//         return 1;
//     }

//     // convert input to double
//     const double inputValue = std::stod(argv[1]);

//     const double outputValue = mathfunctions::sqrt(inputValue);

//     std::cout << "The square root of " << inputValue << " is " << outputValue
//               << std::endl;

//     return 0;
// }

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
    call_quack();
    Py_Finalize();

    return 0;
}