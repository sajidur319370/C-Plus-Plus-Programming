#include <iostream>
#include <concepts>
// Syntax1
template <typename T>
concept TinyType = requires(T t) {
    sizeof(T) <= 4;          // Simple requirement:Only enforces Syntax
    requires sizeof(T) <= 4; // Nested requirement
};
// Compound Requirement
template <typename T>
concept Addable = requires(T a, T b) {
    { a + b } noexcept -> std::convertible_to<int>;

    /**************************************
     *Checks if {a+b} is valid syntax.
     *And doesn't throw exception.
     *And the Result is convertible to int
     ***************************************/
};

Addable auto
add(Addable auto a, Addable auto b)
{

    return a + b;
}

int main()
{
    double a{67};
    double b{56};
    // std::string a{"Hello"};
    // std::string b{"World"};

    auto result = add(a, b);
    // auto x = a + b;
    // std::cout << "Result: " << x << std::endl;

    std::cout << "Result: " << result << std::endl;
    std::cout << "Size of Result: " << sizeof(result) << std::endl;
}