#include <iostream>
int main()
{
    const char* message{"Hello C++"};

    std::cout << "Message is : " << message << std::endl;
    std::cout << "Message is : " << *message << std::endl;

    return 0;
}