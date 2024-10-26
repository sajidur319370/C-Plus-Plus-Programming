#include <iostream>
#include <string>
template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}
int main()
{
    int a{15};
    int b{92};
    auto result = maximum(a, b);
    std::cout << "Result: " << result << std::endl;

    std::string f_name{"Rahman"};
    std::string l_name{"Sajidur"};

    auto max_name = maximum(f_name, l_name);
    std::cout << "Full Name : " << max_name << std::endl;

    return 0;
}