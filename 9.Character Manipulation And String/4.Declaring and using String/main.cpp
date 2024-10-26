#include <iostream>
int main()
{
    std::string full_name;                                   // empty string
    std::string planet{"The eart is round.The sky is blue"}; // initialize with string
    std::string planet_preferred{planet};                    // initialize with existing string
    std::string message{"Hello there", 5};                   // initialize with part of a string
    std::string wired_message(4, 'e');                       // initialize with multiple copies of a char
    std::string greeting{"Hello world"};                     // initialize with string
    std::string say_hello{greeting, 4, 5};                   // initialize with part of a existing string
    // line comment
    std::cout << "Full_name: " << full_name << std::endl;
    std::cout << "Planet: " << planet << std::endl;
    std::cout << "Preferred Planet: " << planet_preferred << std::endl;
    std::cout << "Message: " << message << std::endl;
    std::cout << "Wired Message: " << wired_message << std::endl;
    std::cout << "Greeting: " << greeting << std::endl;
    std::cout << "Say Hello: " << say_hello << std::endl;
    return 0;
}