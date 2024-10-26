#include <iostream>
int main()
{
    std::string name;
    std::cout << "What is your name?: " << "\n";
    std::getline(std::cin, name);
    // name.clear();
    // int len = name.length();
    // std::string username = name.append("@319370");
    // username.insert(5, "l");
    name.erase(0, 3);

    // std::cout << "Length of your name is : " << len << std::endl;
    // std::cout << " your username is : " << username<< std::endl;
    // std::cout << "First letter of your username is : " << username.at(0) << std::endl;
    // std::cout << "your username is : " << username << std::endl;
    std::cout << "your name is : " << name << std::endl;

    return 0;
}