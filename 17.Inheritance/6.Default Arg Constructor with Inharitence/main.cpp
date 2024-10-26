#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{

    std::cout << "================================" << std::endl;
    CivilEngineer ce1;
    std::cout << ce1 << std::endl;
    std::cout << "================================" << std::endl;

    return 0;
}