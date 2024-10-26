#include <iostream>
#include <math.h>
int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter Side A: " << std::endl;
    std::cin >> a;

    std::cout << "Enter Side B: " << std::endl;
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "Side C: " << c << std::endl;

    double z;
    // z = std::max(5, 6);
    // z = std::min(5, 6);
    // z = std::pow(2, 3);
    // z = std::abs(-17);
    // z = std::ceil(4.555);
    // z = std::floor(4.555);
    // std::cout << "Value of Z: " << z << "\n";

    return 0;
}