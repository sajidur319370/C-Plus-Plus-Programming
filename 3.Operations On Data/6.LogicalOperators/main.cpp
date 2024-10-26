#include <iostream>
int main()
{
    int a{true};
    int b{false};
    int c{true};
    // And operators
    std::cout << std::boolalpha;
    std::cout << "a"
              << " && "
              << "b"
              << ":" << (a && b) << std::endl;
    std::cout << "a"
              << " && "
              << "b"
              << " && "
              << "c"
              << ":" << (a && b && c) << std::endl;
    //   Or operators
    std::cout << "a"
              << " || "
              << "b"
              << ":" << (a || b) << std::endl;
    std::cout << "a"
              << " || "
              << "b"
              << " || "
              << "c"
              << ":" << (a || b || c) << std::endl;

    //   negate

    std::cout << "!a"

              << ":" << (!a) << std::endl;

    return 0;
}