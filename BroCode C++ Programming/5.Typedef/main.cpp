#include <iostream>
#include <vector>
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using pairlist_p = std::vector<std::pair<std::string, int>>;
using text_p = std::string;
using number_p = int;

int main()
{
    text_p my_name = "Sajidur Rahman";
    number_p my_age = 28;
    std::cout << "My Name:" << my_name << std::endl;
    std::cout << "my age:" << my_age << std::endl;

    return 0;
}