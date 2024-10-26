#include <iostream>
#include <concepts>
template <typename T>
concept TinyTipe = requires(T t) {
    sizeof(T) <= 4;          // Simple requirement -> Check the exprssion is valid
    requires sizeof(T) <= 4; // Nested requirement
};

template <typename T>
    requires std::integral<T> && TinyTipe<T>
/*  requires std::integral<T> || std::floating_point<T> */
T add(T a, T b)
{
    return a + b;
};

int main()
{
    long int x{8};
    long int y{8};
    /* std::string x{"6"};
    std::string y{"4"}; */

    auto result = add(x, y);
    std::cout << "Result: " << result << std::endl;
    std::cout << "Size of Long Int: " << sizeof(long int) << std::endl;
    return 0;
}