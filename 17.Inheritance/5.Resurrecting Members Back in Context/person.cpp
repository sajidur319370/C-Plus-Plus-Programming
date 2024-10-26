#include "person.h"
#include <iostream>
Person::Person() {

};
Person::Person(std::string_view fullname, int age, const std::string address)
    : m_full_name{fullname},
      m_age{age},
      m_address{address}

{
}
void Person::do_something() const
{
    std::cout << "Hello" << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person:[ Full Name:" << person.m_full_name << " , Age: " << person.m_age << " , Address: " << person.m_address << "]" << std::endl;
    return out;
};
Person::~Person() {

};