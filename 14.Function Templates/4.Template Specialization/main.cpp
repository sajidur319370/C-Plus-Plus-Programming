#include <iostream>
#include <cstring>
// Declaration
template <typename T>
T maximum(const T a, const T b)
{
    return a > b ? a : b;
};
// Template Specialization
template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (std::strcmp(a, b) > 0) ? a : b;
};
int main()
{
    /* const int a{78};
    const int b{29};
    double c{53.76};
    double d{92.43};
    std::string e{"Sajidur"};
    std::string f{"Rahman"}; */

    /* auto max_int = maximum(a, b);
    std::cout << "max_int: " << max_int << std::endl;
    auto max_double = maximum(c, d);
    std::cout << "max_double: " << max_double << std::endl;
    auto max_str = maximum(f, e);
    std::cout << "max_str: " << max_str << std::endl; */

    const char *m{"World"};
    const char *n{"Hello"};
    const char *result = maximum(m, n);

    std::cout << "max(const-char*): " << result << std::endl;
    return 0;
}
