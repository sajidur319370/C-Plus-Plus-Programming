#include <iostream>
#include <concepts>

// This syntax constraints the auto parameters
std::integral auto add(std::integral auto a, std::integral auto b)
{
    return a + b;
};

int main()
{
    long int x{7};
    long int y{4};
    /* std::string x{"6"};
    std::string y{"4"}; */

    std::integral auto result = add(x, y);

    /*****************************************
     *Constraints before auto make it easier
     *to understyand what the function return
     *****************************************/
    std::cout << "Result: " << result << std::endl;
    std::cout << "Size of Long Int: " << sizeof(long int) << std::endl;
    return 0;
}