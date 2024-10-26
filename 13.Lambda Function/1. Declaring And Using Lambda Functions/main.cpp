#include <iostream>
int main()
{
    /*
     * Declaring Lambda Function: [capture list] (parameters) ->return type {
                        //  function body
                                      }
     * * * */

    auto hello = []()
    {
        std::cout << "hello,sajid" << std::endl;
    };
    hello();

    /*  auto add = [](int a, int b)
     {
         return a + b;
     }(6, 7);
     std::cout << "Result: " << add << std::endl; */

    auto add = [](double a, double b) -> int
    {
        return a + b;
    };
    auto res = add(4.6, 9.5);
    std::cout << "Result: " << sizeof(res) << std::endl;
    std::cout << "Result: " << res << std::endl;
    /* auto add = [](int a, int b)
    {
        return a + b;
    };
    int res = add(4, 9);
    std::cout << "Result: " << res << std::endl;
    std::cout << "Result: " << add(7, 8) << std::endl; */

    return 0;
}