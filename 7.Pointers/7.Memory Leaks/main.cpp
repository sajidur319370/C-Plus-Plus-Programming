#include <iostream>
int main()
{

    /* int *data{new int{57}};
    int number{55};
    data = &number; */


    /* int *data{new int{57}}; // address pointer in heap
    data = new int{90}; // Memory with Leak
    delete data;
    data = nullptr; */

    {
        int *data{new int{57}};
    }

    std::cout << "Program ends well" << std::endl;

    return 0;
}