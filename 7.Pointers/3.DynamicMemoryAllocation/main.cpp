#include <iostream>
int main()
{
    int *p_number{nullptr};
    p_number = new int;

    *p_number = 87;
    std::cout << "Dynamically allowcated memory." << std::endl;
    std::cout << "P_Number: " << *p_number << std::endl;

    // return memory to the os
    delete p_number;
    p_number = nullptr;

    p_number = new int(45);
    std::cout << "P_Number: " << *p_number << std::endl;

    int *p_number2{new int{9450}};
    std::cout << "P_Number2: " << *p_number2 << std::endl;

    // Dont delete twice on a pointer:BAD!

    return 0;
}