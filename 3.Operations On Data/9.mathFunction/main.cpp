#include <iostream>
#include <cmath>
int main()
{
    double weight{7.7};
    double savings{-45665};
    double num = 5;

    std::cout << "Weight rounded to ceil is " << std::ceil(weight) << std::endl;
    std::cout << "Abs of saving is " << std::abs(savings) << std::endl;

    std::cout << "Exponent of number is " << std::exp(num) << std::endl;
    std::cout << "Power of number is " << std::pow(num,3) << std::endl;

    return 0;
}