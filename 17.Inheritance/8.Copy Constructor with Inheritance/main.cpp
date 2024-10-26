#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{

    CivilEngineer ce1("Nahid", 37, "Barishal", 15, "Road-Construction");
    std::cout << "===============================" << std::endl;
    CivilEngineer ce2(ce1);
    std::cout << ce2 << std::endl;
    return 0;
}