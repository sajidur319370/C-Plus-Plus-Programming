#include <iostream>
struct Car
{
    std::string name;
    int year;
    std::string color;
};
void paintCar(Car &car, std::string col);
void printCar(Car &car);
int main()
{
    Car car1;
    Car car2;
    car1.name = "Corvette";
    car1.year = 1962;
    car1.color = "RED";
    car2.name = "Mustang";
    car2.year = 1977;
    car2.color = "White";
    paintCar(car1, "Green");
    paintCar(car2, "Black");
    std::cout << "Address of car1: " << &car1 << std::endl;
    printCar(car1);
    std::cout << "Address of car2: " << &car2 << std::endl;
    printCar(car2);

    return 0;
}
void printCar(Car &car)
{
    std::cout << "Address of car: " << &car << std::endl;
    std::cout << car.name << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.color << std::endl;
}
void paintCar(Car &car, std::string col)
{
    car.color = col;
}