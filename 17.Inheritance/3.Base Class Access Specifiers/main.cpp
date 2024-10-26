#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"
int main()
{
    Person person1("Sajidur rahman", 28, "Jashore");
    std::cout << person1 << std::endl;
    std::cout << "================================" << std::endl;

    Player player1;
    player1.m_full_name = "Salah"; // Ok: Public member of parent class

    /*  player1.m_age = 34;                // Compiler error: because of protected member of parent class
     player1.m_address = "Lalmonirhat"; // Compiler error: because of Private member of parent class */

    std::cout << player1 << std::endl;
    std::cout << "================================" << std::endl;

    Nurse nurse1;

    /* nurse1.m_full_name = "Momota"; // Compiler error: because of Protected member of parent class
    nurse1.m_age = 27;              // Compiler error: because of Protected member of parent class
    nurse1.m_address = "Kolagaci"; // Compiler error: because of Private member of parent class */

    std::cout << nurse1 << std::endl;
    std::cout << "================================" << std::endl;

    Engineer engineer1;

    /*  engineer1.m_full_name = "Khalil"; // Compiler error: because of Private member of parent class
     engineer1.m_age = 37;             // Compiler error: because of Private member of parent class
     engineer1.m_address = "Basabo";   // Compiler error: because of Private member of parent class */

    std::cout << engineer1 << std::endl;
    std::cout << "================================" << std::endl;
    return 0;
}