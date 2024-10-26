#include <iostream>

const int Eraser{20};
const int Triangle{32};
const int Circle{56};
const int Marker{78};
const int Ellipse{79};
int main()
{
    int tools{Eraser};
    switch (tools)
    {

    case Triangle:
    {
        std::cout << "Running Triangle" << std::endl;
    }
    break;
    case Eraser:
    {
        std::cout << "Running Eraser" << std::endl;
    }
    break;
    case Circle:
    {
        std::cout << "Running Circle" << std::endl;
    }
    break;
    case Marker:
    {
        std::cout << "Running Marker" << std::endl;
    }
    break;
    case Ellipse:
    {
        std::cout << "Running Ellipse" << std::endl;
    }
    break;
    default:
    {
        std::cout << "No tools matching" << std::endl;
    }
    }

    return 0;
}