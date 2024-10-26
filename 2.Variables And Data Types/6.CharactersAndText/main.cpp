#include <iostream>
int main()
{
    char val{65};
    std::cout << "Character: " << val << std::endl;
    std::cout << "Character Value: " << static_cast<int>(val) << std::endl;

    return 0;
}