#include <iostream>
int main()
{
    std::string name;
    std::string work;
    int age;

    std::cout << "What's your name?" << "\n";
    std::getline(std::cin >> std::ws, name);
    std::cout << "What's your age?" << "\n";
    std::cin >> age;
    std::cout << "What do you do?" << "\n";
    std::getline(std::cin >> std::ws, work);

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old\n";
    std::cout << "You are a " << work << "\n";

    return 0;
}