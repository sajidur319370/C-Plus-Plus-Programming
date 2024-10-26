#include <iostream>
int main()
{
    const unsigned int count{10};
    unsigned int i{0};

   /*  while (i<count)
    {
        std::cout<<i<<": I love C++"<<std::endl;
        i++;
    } */

    do
    {
        std::cout<<i<<": I love C++"<<std::endl;
        ++i;
    } while (i<count);
    
    

    std::cout << "Size of size_t:" << i << std::endl;
    return 0;
}