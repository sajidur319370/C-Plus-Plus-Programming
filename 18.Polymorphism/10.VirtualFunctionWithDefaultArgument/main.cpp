#include <iostream>
#include "derived.h"
int main()
{
    // Base ptr
    Base *base_ptr = new Derived;
    double result = base_ptr->add();
    std::cout << "Result(Base ptr): " << result << std::endl; // 12
    std::cout << "---------------------" << std::endl;

    // Base ref
    Derived derived;
    Base &base_ref = derived;
    result = base_ref.add();
    std::cout << "Result(Base ref): " << result << std::endl; // 12
    std::cout << "---------------------" << std::endl;

    // Raw objects
    Base base;
    result = base.add();
    std::cout << "raw result : " << result << std::endl; // 11
    std::cout << "---------------------" << std::endl;

    // Direct object : Uses static binding
    Derived derived2;
    result = derived2.add();
    std::cout << "Result (Direct object) : " << result << std::endl; // 22
    std::cout << "---------------------" << std::endl;

    // Raw objects - slicing : uses static binding
    Base base1 = derived2;
    result = base1.add();
    std::cout << "Result (Raw objects assignment) : " << result << std::endl; // 11

    return 0;
}