#include <iostream>
void bubbleSort(double elements[], int size);
int main()
{
    double cgpa[] = {2.56, 3.27, 3.88, 2.38, 1.62, 1.98, 2.44, 3.75, 1.54};
    char grade[] = {'C', 'B', 'A', 'D'};
    std::string name[] = {"Sayeed", "Tomal", "Kiron"};

    std::cout << "Size of CGPA: " << sizeof(cgpa) << std::endl;
    std::cout << "Size of GRADE: " << sizeof(grade) << std::endl;
    std::cout << "Size of NAME: " << sizeof(name) << std::endl;
    std::cout << "*************************************************" << std::endl;
    std::cout << "Elements of CGPA: " << sizeof(cgpa) / sizeof(cgpa[0]) << std::endl;
    std::cout << "Elements of GRADE: " << sizeof(grade) / sizeof(grade[0]) << std::endl;
    std::cout << "Elements of NAME: " << sizeof(name) / sizeof(name[0]) << std::endl;
    std::cout << "*************************************************" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << std::endl;
    std::cout << "Size of char: " << sizeof(char) << std::endl;
    std::cout << "Size of string: " << sizeof(std::string) << std::endl;

    int size = sizeof(cgpa) / sizeof(cgpa[0]);

    bubbleSort(cgpa, size);

    for (auto &&i : cgpa)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
void bubbleSort(double elements[], int size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = 0; j < size - 1 - i; j++)
        {
            if (elements[j] > elements[j + 1])
            {
                double temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp;
            }
        }
    }
}