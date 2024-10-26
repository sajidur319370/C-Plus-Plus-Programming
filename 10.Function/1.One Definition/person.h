#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
public:
    Person(const std::string &name_param, int age_param);
    void printInfo() const
    {
        std::cout << "Name: " << full_name << ", age: " << age << std::endl;
    }

private:
    std::string full_name;
    int age;

public:
    static int person_count;
};
#endif