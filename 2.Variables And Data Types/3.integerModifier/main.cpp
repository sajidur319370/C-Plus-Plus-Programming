#include <iostream>
int main()
{
    signed int val1{23};
    signed int val2{-400};

    std::cout << "Size of signed(Val1) int: " << sizeof(val1) << std::endl;
    std::cout << "Size of signed(Val2) int: " << sizeof(val2) << std::endl;
    std::cout<<"-----------------------------------------"<<std::endl;

    unsigned int val3{23};
    unsigned int val4{400};

    std::cout << "Size of unsigned(Val3) int: " << sizeof(val3) << std::endl;
    std::cout << "Size of unsigned(Val3) int: " << sizeof(val4) << std::endl;

    std::cout<<"-----------------------------------------"<<std::endl;

    long int val5{2356565};
    long long signed int val6{-400};
    signed short int val7{-400};

    std::cout << "Size of long(Val3) int: " << sizeof(val5) << std::endl;
    std::cout << "Size of long long signed(Val3) int: " << sizeof(val6) << std::endl;
    std::cout << "Size of signed  short(Val3) int: " << sizeof(val7) << std::endl;
}