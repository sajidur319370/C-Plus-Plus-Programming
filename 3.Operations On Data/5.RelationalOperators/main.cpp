#include <iostream>
int main()
{
    int num1 {23};
    int num2 {45};

    std::cout<<std::boolalpha;
    std::cout<<num1<<" < "<<num2<<" = "<<(num1<num2)<< std::endl;
    std::cout<<num1<<" > "<<num2<<" = "<<(num1>num2)<< std::endl;
    std::cout<<num1<<" != "<<num2<<" = "<<(num1!=num2)<< std::endl;
    return 0;
}