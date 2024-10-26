#include <iostream>
namespace first
{
    int x = 5;
}
namespace second
{
    int x = 9;
}

int main()
{
    using first::x;
    using std::string;
    // line comment
    std::cout << x << std::endl;
    std::cout << second::x << std::endl;

    string name = "SAJIDUR RAHMAN";

    std::cout << name << std::endl;

    return 0;
}