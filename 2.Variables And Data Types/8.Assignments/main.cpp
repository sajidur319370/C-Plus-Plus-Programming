#include <iostream>
int main()
{
    auto var{3456u};
    std::cout << "Value of var: " << var << std::endl;
    var = -45; // Danger but not compiling errror
    std::cout << "Value of var: " << var << std::endl;
    return 0;
}