#include <iostream>

int main()
{
    const size_t size{10};
    double *p_salaries{new double[size]};
    int *p_students{new (std::nothrow) int[size]{2, 4, 5, 7}};
    double *p_scores{new (std::nothrow) double[size]{23.45, 67.89, 45.56}};

    if (p_scores)
    {
        std::cout << "Successfully allocatd memory for p_scores" << std::endl;
        for (size_t i = 0; i < size; i++)
        {
            std::cout << "P_Scores[" << i << "]: " << *(p_scores + i) << std::endl;
        }
    }

    delete[] p_salaries;
    p_salaries = nullptr;
    delete[] p_scores;
    p_scores = nullptr;
    delete[] p_students;
    p_students = nullptr;

    std::cout << "==================================================" << std::endl;

    // Static Arrays Vs Dynamic Arrays
    int scores[20]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Size of scores:" << std::size(scores) << std::endl;
    /* for (size_t i = 0; i < std::size(scores); i++)
         {
             std::cout << "Scores[" << i << "]: " << scores[i]<< std::endl;
         } */

    for (auto s : scores)
    {
        std::cout << "Scores: " << s << std::endl;
    }

    return 0;
}