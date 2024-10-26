#include <iostream>
#include <limits>
int main()
{
    std::cout << "_____________________________________" << std::endl;
    std::cout << "Range of short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Range of Long is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Range of Long Lowest is from " << std::numeric_limits<short>::lowest() << std::endl;

    return 0;
}