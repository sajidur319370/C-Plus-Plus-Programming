#include <iostream>
int max(int a, int b)
{
    std::cout << "Int overload called" << std::endl;
    std::cout << "------------------------------" << std::endl;
    return (a > b) ? a : b;
}
double max(double a, double b)
{
    std::cout << "Double overload called" << std::endl;
    std::cout << "------------------------------" << std::endl;
    return (a > b) ? a : b;
}
double max(int a, double b)
{
    std::cout << "Int-Double overload called" << std::endl;
    std::cout << "------------------------------" << std::endl;
    return (a > b) ? a : b;
}
double max(double a, int b)
{
    std::cout << "Double-Int overload called" << std::endl;
    std::cout << "------------------------------" << std::endl;
    return (a > b) ? a : b;
}
double max(double a, int b, double c)
{
    std::cout << "Double-Int-Double overload called" << std::endl;
    std::cout << "------------------------------" << std::endl;
    if (a > b)
    {
        return (a > c) ? a : c; // a: when a > b and  b > c
                                // c: when a > b and c > a
    }
    else if (b > a)
    {
        return (b > c) ? b : c; // b: when b > a and  b > c
                                // c: when b > a and c > b
    }
    else
    {
        return (a > c) ? a : c; // a: when a == b and a>c
                                // c: when a == b == c
    }
}
std::string_view max(std::string_view a, std::string_view b)
{

    std::cout << "String_View overload called" << std::endl;
    std::cout << "------------------------------" << std::endl;
    return (a > b) ? a : b;
}
int main()
{

    int a{5};
    int b{9};
    double x{9};
    double y{9};
    std::string_view m{"Hello"};
    std::string_view n{"World"};

    auto result_1 = max(a, b);
    auto result_2 = max(x, y);
    auto result_3 = max(a, y);
    auto result_4 = max(x, b);
    auto result_5 = max(x, b, y);
    auto result_6 = max(m, n);
    std::cout << "Max among (" << x << "," << b << "," << y << "): " << result_5 << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << "Max among (" << m << "," << n << "): " << result_6 << std::endl;

    return 0;
}