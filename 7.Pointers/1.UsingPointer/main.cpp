#include <iostream>
int main()
{
    int *p_number{nullptr}; // Initialize nullptr
    double *p_fractional_number{nullptr};

    int num1{34};
    double var2{34.67};

    p_number = &num1;
    p_fractional_number = &var2;

    std::cout<<"Num1: "<<*p_number<<std::endl;
    std::cout<<"Var1(double): "<<*p_fractional_number<<std::endl;

    return 0;
}