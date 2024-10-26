#include <iostream>
#include <type_traits>
#include <concepts>

// Syntax1
/* template <typename T>
concept myIntegral = std::is_integral_v<T>;

myIntegral auto add(myIntegral auto a, myIntegral auto b)
{
    return a + b;
}; */

template <typename T>
concept Multipliable = requires(T a, T b) {
    a *b; // Just make sure the syntax is valid
};

template <typename T>
concept Incrementable = requires(T a) {
    a += 1;
    a++;
    ++a;
};
template <Incrementable T>
T add(T a, T b)
{

    return a + b;
}

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

    /* double c_0{6.5};
    double c_1{7.8};
    auto result_c = add(c_0, c_1);
    std::cout << "Result_c: " << result_c << std::endl;
    return 0; */
}