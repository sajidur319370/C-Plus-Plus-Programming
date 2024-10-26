#include "person.h"
#include <iostream>
Person::Person()
{

    std::cout << "Person::Default constructor is called" << std::endl;
};
Person::Person(std::string_view fullname, int age, const std::string_view address)
    : m_full_name{fullname},
      m_age{age},
      m_address{address}

{
    std::cout << "Person::Custom constructor is called" << std::endl;
}
Person::Person(const Person &source) : m_full_name{source.m_full_name}, m_address{source.m_address}, m_age{source.m_age}
{
    std::cout << "Person::Copy constructor is called" << std::endl;
};
void Person::do_something() const
{
    std::cout << "Hello" << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person:[ Full Name:" << person.m_full_name << " , Age: " << person.m_age << " , Address: " << person.m_address << "]" << std::endl;
    return out;
};
Person::~Person()
{
    std::cout << "Person::Destructor is called..." << std::endl;
};