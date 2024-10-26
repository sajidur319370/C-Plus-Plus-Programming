#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
    std::cout << "================================" << std::endl;
    Person pr1("Robin", 30, "Noakhali");
    std::cout << pr1 << std::endl;
    std::cout << "================================" << std::endl;

    std::cout << "================================" << std::endl;
    Engineer en1("Nahid", 37, "Barishal", 15);
    std::cout << en1 << std::endl;
    std::cout << "================================" << std::endl;

    std::cout << "================================" << std::endl;
    CivilEngineer ce1("Faruk", 40, "Comilla", 25, "Building_expert");
    std::cout << ce1 << std::endl;
    std::cout << "================================" << std::endl;

    return 0;
}