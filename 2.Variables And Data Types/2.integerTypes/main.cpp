#include <iostream>
int main()
{
    // brace initilization
    /* int elephant_count;
    int lion_count{};
    int dog_count{10};
    int cat_count{25};
    int domestic_animal{dog_count + cat_count};
    // int narrowing_conv{2.3};

    std::cout << "elephant_count: " << elephant_count << std::endl;
    std::cout << "lion_count: " << lion_count << std::endl;
    std::cout << "Domestic_animal: " << domestic_animal << std::endl;
    // std::cout << "Narrowing conversion: " << narrowing_conv << std::endl; */

    // Assignment initialization
    int bus_count = 9;
    int truck_count = 56;
    std::cout << "Vehicle count: " << bus_count + truck_count << std::endl;

    // function initilization
    int elephant_count;
    int dog_count(10);
    int cat_count(25);
    int domestic_animal(dog_count + cat_count);

    int narrowing_conv(2.3);
    std::cout << "elephant_count: " << elephant_count << std::endl;
    std::cout << "Domestic_animal: " << domestic_animal << std::endl;
    std::cout << "Narrowing conversion: " << narrowing_conv << std::endl;

    std::cout << "Size of int: " << sizeof(cat_count) << std::endl;

    return 0;
}