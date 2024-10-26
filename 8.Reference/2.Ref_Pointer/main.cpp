#include <iostream>
int main()
{
    double double_data{55};
    double &ref_double_data{double_data};
    double *p_double_data{&double_data};

    std::cout << "Double_data: " << double_data << std::endl;
    std::cout << "&ref_Double_data: " << &ref_double_data << std::endl;
    std::cout << "p_Double_data: " << p_double_data << std::endl;
    std::cout << "*p_Double_data: " << *p_double_data << std::endl;

    int age = 27;
    const int &ref_age{age};

    age++;

    std::cout << "Age incremented: " << age << std::endl;

    return 0;
}