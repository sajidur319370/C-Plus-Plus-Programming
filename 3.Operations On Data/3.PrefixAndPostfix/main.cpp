#include <iostream>
int main()
{
    int value{6};
    // post increment
    std::cout << "Value" << value++ << std::endl;
    std::cout << "Value" << value << std::endl;

    value = 7;
    // pre increment
    std::cout << "Value" << ++value << std::endl;
    std::cout << "Value" << value << std::endl;

    return 0;
}