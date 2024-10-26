#include <iostream>
int main()
{
    size_t i{0};
    for (; i < 10; ++i)
    {
        std::cout << i << ": I love C++" << std::endl;
    }

    std::cout << "Size of size_t:" << i << std::endl;
    return 0;
}