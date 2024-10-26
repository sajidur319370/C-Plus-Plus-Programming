#include <iostream>
#include "compare.h"
#include "operation.h"
int main()
{
    int m{5};
    int n{9};
    int max_result = max(m, n);
    int min_result = min(m, n);

    std::cout << "Maximum:(" << m << "," << n << "): " << max_result << std::endl;
    std::cout << "Minimum:(" << m << "," << n << "): " << min_result << std::endl;
    int incr_mult_result = incr_mult(m, n);
    std::cout << "After increment, Multplication Result:(" << m << "," << n << "): " << incr_mult_result << std::endl;

    return 0;
}