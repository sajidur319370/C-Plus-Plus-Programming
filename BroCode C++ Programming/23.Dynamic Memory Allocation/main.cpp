#include <iostream>
int main()
{
    // // Dynamic Memory Allocation
    // int *p_num = NULL;
    // p_num = new int;
    // *p_num = 319370;

    // std::cout << "Address of variable: " << p_num << std::endl;
    // std::cout << "Value of variable: " << *p_num << std::endl;

    // delete p_num;

    // std::cout << "After Deleting pointer, Address of variable: " << p_num << std::endl;
    // std::cout << "After Deleting pointer, Value of variable: " << *p_num << std::endl;

    char *p_grades = NULL;
    int size;
    std::cout << "Size of your array:" << std::endl;
    std::cin >> size;
    p_grades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter Your Grades: " << std::endl;
        std::cin >> p_grades[i];
        ;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << "Your Grades are: " << p_grades[i] << std::endl;
    }

    delete[] p_grades;

    return 0;
}