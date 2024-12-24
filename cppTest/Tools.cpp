#include "Tools.h"

int get_char_array_size(char* c)
{
    int i = 0;
    while (c[i] != '\0')
    {
        i++;
    }
    return i;
}

bool is_a_number(char c)
{
    for (int i = 0; i < 10; i++)
    {
        if (c == '0' + i)
            return true;
    }
    return false;
}