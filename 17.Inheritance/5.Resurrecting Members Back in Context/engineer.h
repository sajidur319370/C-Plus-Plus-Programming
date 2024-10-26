#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer : private Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

public:
    Engineer();
    ~Engineer();

    void build_something()
    {
        m_full_name = "Bannah"; // Public member of parent class
        m_age = 26;             // Protected member of parent class
        // m_address = "Khulna";  // Compiler error because of private member of parent class
    }
    int get_contract_count() const
    {
        return contract_count;
    }

public:
    using Person::add;

protected:
    using Person::get_address;
    using Person::get_age;
    using Person::get_full_name;
    // using Person::m_address; // Compiler error

private:
    int contract_count{0};
};
#endif