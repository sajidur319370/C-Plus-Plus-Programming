#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
    std::cout << "Engineer::Default constructor is called" << std::endl;
};
Engineer::Engineer(std::string_view fullname, int age, const std::string_view address, int contract_count_param)
    : Person(fullname, age, address), m_contract_count{contract_count_param}
{
    std::cout << "Engineer::Custom constructor is called" << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer: [Full Name:" << engineer.get_full_name() << ", Age: " << engineer.get_age()
        << ", Address: " << engineer.get_address()
        << ", Contract count: " << engineer.m_contract_count << "]" << std::endl;

    return out;
}
Engineer::~Engineer()
{
}