#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H
#include "engineer.h"

class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &civil_engineer);

public:
    CivilEngineer();
    CivilEngineer(std::string_view fullname, int age, const std::string_view address, int contract_count, std::string_view speciality);
    CivilEngineer(const CivilEngineer &source);
    ~CivilEngineer();
    void build_road()
    {
        // get_full_name();       // Compiler error
        // m_full_name = "Sayed"; // Compiler error
        // m_age = 27;            // Compiler error
        add(2, 3);
        add(2, 3, 4);
    }

public:
    // using Person::do_somthing //Compiler error

private:
    std::string m_speciality{"None"};
};
#endif