#include <iostream>
#include <iomanip>
int main()
{
    /*  float num1{2.456686544f};
     double num2{3.456566577687};
     long double num3{4.5666555454L};
     std::cout << "------------------------------------------------------------------" << std::endl;
     std::cout << "Size of float: " << sizeof(num1) << std::endl;
     std::cout << "Size of double: " << sizeof(num2) << std::endl;
     std::cout << "Size of long double: " << sizeof(num3) << std::endl;
     std::cout << "------------------------------------------------------------------" << std::endl;
     // precision
     std::cout << std::setprecision(20);
     std::cout << "number1 is: " << num1 << std::endl;
     std::cout << "number2 is: " << num2 << std::endl;
     std::cout << "number3 is: " << num3 << std::endl;
     std::cout << "------------------------------------------------------------------" << std::endl;

     double num4{0.0000000056789};
     double num5{4.567e-8};
     double num6{584e9};
     std::cout << "number4 is: " << num4 << std::endl;
     std::cout << "number5 is: " << num5 << std::endl;
     std::cout << "number6 is: " << num6 << std::endl;

     std::cout << "------------------------------------------------------------------" << std::endl;
  */
    // Infinity
    double number7{-4.5};
    double number8{};
    double number9{};

    double result{number7 / number8};

    std::cout << number7
              << "/"
              << number8
              << " yelds " << result << std::endl;
    std::cout << number7
              << "+"
              << result
              << " yelds " << number7 + result << std::endl;

    // NAN
    result = number8 / number9;
    std::cout << number8
              << "/"
              << number9
              << " yelds " << result << std::endl;

    return 0;
}