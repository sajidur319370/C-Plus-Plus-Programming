#include "person.h"
#include "nurse.h"
#include <iostream>
Nurse::Nurse() {

};
std::ostream &operator<<(std::ostream &out, const Nurse &nurse)
{
    out << "Nurse: [Full Name:" << nurse.get_full_name() << ", Age: " << nurse.get_age()
        << ", Address: " << nurse.get_address()
        << ", Practice certificate id: " << nurse.practice_certificate_id << "]" << std::endl;

    return out;
}
Nurse::~Nurse() {

};