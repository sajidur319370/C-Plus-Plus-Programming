#include <iostream>
template <typename T, typename U>

/* T max(T a, T b)
{
    return a > b ? a : b;
} */
auto min(U x, T y)
{
    return x < y ? x : y;
}
int main()
{
    /* std::cout << "1.Max: " << max(5, 6) << std::endl;
    std::cout << "2.Max: " << max(5.6, 6.7) << std::endl; */
    std::cout << "3.Min: " << min(5.6, 7) << std::endl;
    return 0;
}
