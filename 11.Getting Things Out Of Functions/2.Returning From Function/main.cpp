#include <iostream>
std::string add_str(std::string input1, std::string input2);
int add_int(int input1, int input2);

int main()
{

    std::string in_str1{"Bellevue"};
    std::string in_str2{"Cassablanca"};
    std::string out_str = add_str(in_str1, in_str2);
    std::cout << "Outside the function Address of Result string: " << &out_str << std::endl;
    std::cout << "Result string: " << out_str << std::endl;

    int input_int1{4};
    int input_int2{8};
    int out_int = add_int(input_int1, input_int2);
    std::cout << "Outside the function Address of Result Int: " << &out_int << std::endl;
    std::cout << "Rersult Int: " << out_int << std::endl;
}
std::string add_str(std::string input1, std::string input2)
{
    std::string output = input1 + input2;
    std::cout << "Inside the function Address of Result string: " << &output << std::endl;
    return output;
}
int add_int(int input1, int input2)
{
    int output = input1 + input2;
    std::cout << "Inside the function Address of Result Int: " << &output << std::endl;
    return output;
}