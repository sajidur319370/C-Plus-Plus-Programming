#include <iostream>
int main()
{
    bool green_light{false};
    bool red_light{true};

    std::cout << "Green light :" << green_light << std::endl;
    std::cout << "Red light :" << red_light << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Green light :" << green_light << std::endl;
    std::cout << "Red light :" << red_light << std::endl;
    return 0;
}