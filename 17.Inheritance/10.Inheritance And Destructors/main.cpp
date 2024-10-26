#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{

    CivilEngineer ce1("Nahid", 37, "Barishal", 15, "Road-Construction");
    std::cout << "===============================" << std::endl;
    std::cout << ce1 << std::endl;
    return 0;
}