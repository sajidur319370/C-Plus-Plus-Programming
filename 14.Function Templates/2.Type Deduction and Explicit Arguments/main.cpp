#include <iostream>
#include <string>
template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}
int main()
{
    int a{1};
    int b{2};
    double c{5.6};
    double d{9.3};
    std::string f_name{"Rahman"};
    std::string l_name{"Sajidur"};

    auto result = maximum<int>(b, c); // Explicit template artguments
    std::cout << "Result: " << result << std::endl;

    /* auto max_name = maximum(f_name, l_name);
    std::cout << "Full Name : " << max_name << std::endl; */

    return 0;
}