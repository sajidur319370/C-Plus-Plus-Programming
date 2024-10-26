#include <iostream>
#include <string>
// Declaration
template <typename T>
const T &maximum(const T &a, const T &b);
int main()
{
    const int a{7};
    const int b{9};
    double c{5.6};
    double d{9.3};

    std::cout << "Out - &a:" << &a << std::endl; // 0xb8195ff7a0
    auto result = maximum(a, b);
    std::cout << "Out - &a:" << &a << std::endl; // 0xb8195ff7a0
    std::cout << "Result: " << &result << std::endl;

    return 0;
}
// Definition
template <typename T>
const T &maximum(const T &a, const T &b)
{
    std::cout << "In - &a:" << &a << std::endl; // 0xb8195ff780
    return a > b ? a : b;
}