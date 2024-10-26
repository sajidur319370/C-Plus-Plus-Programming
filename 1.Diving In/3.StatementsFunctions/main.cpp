#include <iostream>

int multiplyTwoNumbers(int first_num, int second_num)
{
    int result = first_num * second_num;
    return result;
}
int main()
{
    int num1{4};
    int num2{8};
    int result = multiplyTwoNumbers(3, 5);
    std::cout << "result: " << result << std::endl;
    std::cout << "result: " << multiplyTwoNumbers(num1, num2) << std::endl;
}