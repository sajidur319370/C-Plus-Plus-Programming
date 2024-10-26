#include <iostream>
int main()
{
    /*
     * Declaring Lambda Function: [capture list] (parameters) ->return type {
                        //  function body
                                      }
     * * * */

    int a{6};
    int b{8};

    // Capture by value
    auto func_1 = [=]()
    {
        std::cout << "In function Value of A:" << a << std::endl;
        std::cout << "In function Value of B:" << b << std::endl;
    };

    for (size_t i = 0; i < 5; i++)
    {

        std::cout << "In loop Value of A:" << a << std::endl;
        std::cout << "In loop Value of B:" << b << std::endl;
        func_1();
        ++a;
        ++b;
    }

    //    Capture by reference
    int c{9};
    int d{9};
    auto func_2 = [&]()
    {
        std::cout << "In function Value of C:" << c << std::endl;
        std::cout << "In function Value of D:" << d << std::endl;
    };
    std::cout << "========================================================" << std::endl;
    for (size_t i = 0; i < 5; i++)
    {

        std::cout << "In loop Value of C:" << c << std::endl;
        std::cout << "In loop Value of D:" << d << std::endl;
        func_2();
        ++c;
        ++d;
    }

    return 0;
}