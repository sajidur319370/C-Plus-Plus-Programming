#include <iostream>
#include <iomanip>
int main()
{
    int col_width{10};

    std::cout << "Formatted Table by right" << std::endl;
    std::cout << std::right;
    // std::cout << std::left;
    std::cout << std::setw(col_width) << "FirstName" << std::setw(col_width) << "last name" << std::setw(col_width) << "age" << std::endl;
    std::cout << std::setw(col_width) << "First" << std::setw(col_width) << "lname" << std::setw(col_width) << "age" << std::endl;
    std::cout << std::setw(col_width) << "FirstNe" << std::setw(col_width) << "last" << std::setw(col_width) << "age As" << std::endl;
    std::cout << std::setw(col_width) << "Fir" << std::setw(col_width) << "lastname" << std::setw(col_width) << "age ad" << std::endl;

    std::cout << "===================================================================================" << std::endl;
    std::cout << "Formatted Table by left" << std::endl;
    // std::cout << std::right;
    std::cout << std::left;
    std::cout << std::setw(col_width) << "FirstName" << std::setw(col_width) << "last name" << std::setw(col_width) << "age" << std::endl;
    std::cout << std::setw(col_width) << "First" << std::setw(col_width) << "lname" << std::setw(col_width) << "age" << std::endl;
    std::cout << std::setw(col_width) << "FirstNe" << std::setw(col_width) << "last" << std::setw(col_width) << "age As" << std::endl;
    std::cout << std::setw(col_width) << "Fir" << std::setw(col_width) << "lastname" << std::setw(col_width) << "age ad" << std::endl;

    std::cout << "===================================================================================" << std::endl;
    std::cout << std::right;
    // std::cout << std::left;
    std::cout << std::setw(col_width) << -35.678 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(col_width) << -35.678 << std::endl;


     //fixed and scientific : for floating point values
    
    double a{ 3.1415926535897932384626433832795 };
    double b{ 2006.0 };
    double c{ 1.34e-10 };
    
    std::cout << std::endl;
    std::cout << "double values (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    return 0;
}