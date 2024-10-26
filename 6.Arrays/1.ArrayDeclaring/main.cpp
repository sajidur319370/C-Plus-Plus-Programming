#include <iostream>
int main()
{
    int classes[]{12, 56, 88, 34, 22, 78, 243};
    // Range based for loop

    int arr_size{std::size(classes)};
    std::cout << "Size: " << arr_size << std::endl;

    for (auto i : classes)
    {
        std::cout << "Value:" << i << std::endl;
    }

    return 0;
}