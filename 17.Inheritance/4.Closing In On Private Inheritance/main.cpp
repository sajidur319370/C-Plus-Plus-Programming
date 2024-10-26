#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{

    Engineer en1;
    CivilEngineer ce1;

    std::cout << en1 << std::endl;
    std::cout << "================================" << std::endl;

    std::cout << ce1 << std::endl;
    std::cout << "================================" << std::endl;

    return 0;
}