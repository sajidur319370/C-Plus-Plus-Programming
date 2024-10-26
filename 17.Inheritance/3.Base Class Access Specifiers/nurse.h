#ifndef NURSE_H
#define NURSE_H
#include "person.h"

class Nurse : protected Person
{
    friend std::ostream &operator<<(std::ostream &out, const Nurse &nurse);

public:
    Nurse();
    ~Nurse();
    void treat_unwell_person()
    {
        m_full_name = "Rakib"; // Ok: Public member of parent class
        m_age = 56;            // Ok: Protected member of parent class
        // m_address = "Khulna";  // Compiler error: because of private member of parent class
    }

protected:
private:
    int practice_certificate_id{0};
};

#endif