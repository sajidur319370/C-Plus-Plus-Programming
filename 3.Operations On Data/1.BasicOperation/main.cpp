#include <iostream>
int main()
{
    int a{45};
    int b{34};

    int res{b - a};

    std::cout << "Result: " << res << std::endl;
    res = b % a;

    std::cout << "Result: " << res << std::endl;
    return 0;
}