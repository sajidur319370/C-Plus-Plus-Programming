#include <iostream>
void max_str(std::string &input1, std::string input2, std::string &output);
void max_int(int input1, int input2, int &output);
void max_double(double input1, double input2, double *output);
int main()
{
    std::string out_str;
    std::string in_str1{"Bellevue"};
    std::string in_str2{"Cassablanca"};
    max_str(in_str1, in_str2, out_str);
    std::cout << "Max string: " << out_str << std::endl;

    int out_int;
    int input_int1{34};
    int input_int2{58};
    max_int(input_int1, input_int2, out_int);
    std::cout << "Max Int: " << out_int << std::endl;

    double out_double;
    double input_double1{73.99};
    double input_double2{55.66};
    max_double(input_double1, input_double2, &out_double);
    std::cout << "Max Double: " << out_double << std::endl;

    return 0;
}
void max_str(std::string &input1, std::string input2, std::string &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}
void max_int(int input1, int input2, int &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}
void max_double(double input1, double input2, double *output)
{
    if (input1 > input2)
    {
        *output = input1;
    }
    else
    {
        *output = input2;
    }
}