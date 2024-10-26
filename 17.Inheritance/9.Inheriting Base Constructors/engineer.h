#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer : public Person
{
    using Person::Person;
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

public:
    /* Engineer();
    Engineer(std::string_view fullname, int age, const std::string_view address, int contract_count);
    Engineer(const Engineer &source); */
    ~Engineer();

    void build_something()
    {
        m_full_name = "Bannah"; // Public member of parent class
        m_age = 26;             // Protected member of parent class
        // m_address = "Khulna";  // Compiler error because of private member of parent class
    }
    int get_contract_count() const
    {
        return m_contract_count;
    }

private:
    int m_contract_count{0};
};
#endif