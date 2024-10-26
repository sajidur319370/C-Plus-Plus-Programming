#include <iostream>
#include <concepts>

/* // Syntax1
template <typename T>
    requires std::integral<T>
T add(T a, T b)
{
    return a + b;
} */

// Syntax2
template <std::integral T>
T add(T a, T b)
    requires std::integral<T>
{
    return a + b;
}

/* // Syntax3
template <std::integral T>
T add(T a, T b)
{
    return a + b;
} */

/* // Syntax4
auto add(std::integral auto a, std::integral auto b)
{
    return a + b;
} */

int main()
{
    int a_0{6};
    int a_1{7};
    auto result_a = add(a_0, a_1);
    std::cout << "Result_a: " << static_cast<int>(result_a) << std::endl;

    int b_0{9};
    int b_1{8};
    auto result_b = add(b_0, b_1);
    std::cout << "Result_b: " << result_b << std::endl;
    /*
        double c_0{6.5};
        double c_1{7.8};
        auto result_c = add(c_0, c_1);
        std::cout << "Result_c: " << result_c << std::endl;
        return 0;*/
}