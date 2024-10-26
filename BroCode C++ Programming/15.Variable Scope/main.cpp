#include <iostream>
int num = 99;
int printNum();
int main()
{
    int num = 9;

    printNum();

    std::cout << "MY Number is: " << ::num << std::endl;

    return 0;
}
int printNum()
{
    int num = 67;
    std::cout << "MY Number is: " << ::num << std::endl;
    return 1;
}