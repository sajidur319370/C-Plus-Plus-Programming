#include <iostream>
int main()
{

    std::string name;
    std::string fullName;
    int age;

    std::cerr << "Error:" << std::endl;
    std::clog << "Log:" << std::endl;

    /* std::cout << "Please Write your name:" << std::endl;
    std::cin >> name; */

    std::cout << "Please Write your full name:" << std::endl;
    std::getline(std::cin, fullName);

    std::cout << "Please Write your age:" << std::endl;
    std::cin >> age;

    std::cout << "Hello " << fullName << " Your age is: " << age << std::endl;
    return 0;
}