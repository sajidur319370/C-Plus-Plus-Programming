#include <iostream>
#include <sstream>
int main()
{
    int num1{60};
    int num2{70};
    bool result = (num1 > num2);

    if (!result)
    {
        std::cout << std::boolalpha;
        std::cout << "Result: " << result << std::endl;
        std::cout << num1 << " is less than " << num2 << std::endl;
    }
    else
    {
        std::cout << std::boolalpha;
        std::cout << "Result: " << result << std::endl;
        std::cout << num1 << " is greater than " << num2 << std::endl;
    }
    return 0;
}