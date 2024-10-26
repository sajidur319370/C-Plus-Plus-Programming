#include <iostream>
int main()
{
    char var1{45};
    char var2{45};;

    auto res = var1 + var2;

    std::cout<<"Size of var1 "<<sizeof(var1)<<std::endl;
    std::cout<<"Size of var2 "<<sizeof(var2)<<std::endl;
    std::cout<<"Size of Result "<<sizeof(res)<<std::endl;

    return 0;
}