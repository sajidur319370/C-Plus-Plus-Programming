#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H
#include "engineer.h"

class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &civil_engineer);

public:
    CivilEngineer();
    ~CivilEngineer();
    void build_road()
    {
        // get_full_name();       // Compiler error
        // m_full_name = "Sayed"; // Compiler error
        // m_age = 27;            // Compiler error
    }

private:
    std::string m_speciality{"None"};
};
#endif