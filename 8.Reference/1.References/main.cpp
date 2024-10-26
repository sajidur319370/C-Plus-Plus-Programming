#include <iostream>
int main()
{
    int int_data{33};
    double double_data{55};

    int &ref_int_data{int_data};
    double &ref_double_data{double_data};

    std::cout << "Int_data: " << int_data << std::endl;
    std::cout << "Double_data: " << double_data << std::endl;
    std::cout << "&Int_data: " << &int_data << std::endl;
    std::cout << "&Double_data: " << &double_data << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "ref_Int_data: " << ref_int_data << std::endl;
    std::cout << "ref_Double_data: " << ref_double_data << std::endl;
    std::cout << "&ref_Int_data: " << &ref_int_data << std::endl;
    std::cout << "&ref_Double_data: " << &ref_double_data << std::endl;

    std::cout << "==========================================" << std::endl;
    int_data = 79;
    double_data = 677;
    std::cout << "Int_data: " << int_data << std::endl;
    std::cout << "Double_data: " << double_data << std::endl;
    std::cout << "&Int_data: " << &int_data << std::endl;
    std::cout << "&Double_data: " << &double_data << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "ref_Int_data: " << ref_int_data << std::endl;
    std::cout << "ref_Double_data: " << ref_double_data << std::endl;
    std::cout << "&ref_Int_data: " << &ref_int_data << std::endl;
    std::cout << "&ref_Double_data: " << &ref_double_data << std::endl;

    std::cout << "=================Change data through Reference=========================" << std::endl;
    ref_int_data = 987;
    ref_double_data = 434;
    std::cout << "Int_data: " << int_data << std::endl;
    std::cout << "Double_data: " << double_data << std::endl;
    std::cout << "&Int_data: " << &int_data << std::endl;
    std::cout << "&Double_data: " << &double_data << std::endl;

    return 0;
}