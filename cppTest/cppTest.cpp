#include <iostream>

//a power b
float pow(int a, int b)
{
    float res = a;
    for (int i = 0; i < b - 1; i++)
    {
        res *= a;
    }
    return res;
}

//get char* array size without bugs for once
int get_char_array_size(char* c)
{
    int i = 0;
    while (c[i] != '\0')
    {
        i++;
    }
    return i;
}

//check is a char is 0, 1, ... or 9
bool is_a_number(char c)
{
    for (int i = 0; i < 10; i++)
    {
        if (c == '0' + i)
            return true;
    }
    return false;
}

//return 0 for float, 1 for float with decimal value, -1 if error
int check_parameters_as_valid(char* param)
{
    bool hasComa = false;
    for (int i = 0; i < get_char_array_size(param); i++)
    {
        if (!is_a_number(param[i]))
        {
            if (param[i] == '.' || param[i] == ',')
                hasComa = true;
            else
                return -1;
        }
    }
    if (hasComa) return 1; else return 0;
}

float turn_param_to_float(char* p)
{
    float f = 0;
    
    return f;
}

int main(int argc, char** argv)
{
    std::cout << get_char_array_size(argv[1]) << '\n';
    std::cout << argv[1] << '\n';
    std::cout << check_parameters_as_valid(argv[1]);
}