#include <iostream>
void printSomething(std::string name);
void printSomething(std::string name, int age);
void printSomething(std::string name, int age, std::string designation);
int main()
{
    printSomething("sajid");
    std::cout << "****************************" << std::endl;
    printSomething("sajid", 28);
    std::cout << "****************************" << std::endl;
    printSomething("sajid", 28, "Softwarte Engineer");

    return 0;
}

void printSomething(std::string name)
{
    std::cout << "You are " << name << std::endl;
}
void printSomething(std::string name, int age)
{
    std::cout << "You are " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
}
void printSomething(std::string name, int age, std::string designation)
{
    std::cout << "You are " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    std::cout << "Your Designation:  " << designation << std::endl;
}