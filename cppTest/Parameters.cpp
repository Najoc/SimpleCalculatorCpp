#include "Parameters.h"

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

double turn_param_to_float(char* p)
{
    double f = 0;

    return f;
}