#include <iostream>
int main()
{
    /*
     * Declaring Lambda Function: [capture list] (parameters) ->return type {
                        //  function body
                                      }
     * * * */

    /* int a{6};
    int b{8};
    auto func = [a, b](int x, int y)
    {
        std::cout << "Result: " << x + y << std::endl;
        return a + b;
    };
    auto res = func(6, 7);
    std::cout << "Outside , Result: " << res << std::endl; */

    // Capture by value
    /* int c{9};
    auto func = [c]()
    {
        std::cout << "In function Value of C:" << c << std::endl;
    };

    for (size_t i = 0; i < 5; i++)
    {

        std::cout << "In loop Value of C:" << c << std::endl;
        func();
        ++c;
    } */

    //    Capture by reference
    int c{9};
    auto func = [&c]()
    {
        std::cout << "In function Value of C:" << c << std::endl;
    };

    for (size_t i = 0; i < 5; i++)
    {

        std::cout << "In loop Value of C:" << c << std::endl;
        func();
        ++c;
    }

    return 0;
}