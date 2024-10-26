#include <iostream>
/* std::string enter_bar(int age)
{
    if (age > 18)
        return "You are welcome";
    return "You are too young to enter";
} */
int multiply_after_increment(int a, int b)
{
    std::cout << "Inside function Before increment value of a: " << a << std::endl;
    std::cout << "Inside function Before increment value of b: " << b << std::endl;

    int result = ((++a) * (++b));

    std::cout << "Inside function After increment value of a: " << a << std::endl;
    std::cout << "Inside function After increment value of b: " << b << std::endl;
    return result;
}
int main()

{
    // std::string verify = enter_bar(20);
    // std::cout << verify << std::endl;
    // std::string verify_2 = enter_bar(12);
    // std::cout << verify_2 << std::endl;
    /* for (size_t i = 10; i < 25; i++)
    {
        std::string verify_3 = enter_bar(i);
        std::cout << verify_3 << std::endl;
    } */
    int h{3};
    int i{4};
    std::cout << "Outside Function Before increment value of h: " << h << std::endl;
    std::cout << "Outside Function Before increment value of i: " << i << std::endl;
    int mult_incr_result = multiply_after_increment(h, i);
    std::cout << "Result: " << mult_incr_result << std::endl;
    std::cout << "Outside Function Before increment value of h: " << h << std::endl;
    std::cout << "Outside Function Before increment value of i: " << i << std::endl;

    return 0;
}