#include "Operation.h"

//a power b
int pow(int a, int b)
{
    int res = a;
    for (int i = 0; i < b - 1; i++)
    {
        res *= a;
    }
    return res;
}

//a power b
double pow(double a, int b)
{
    double res = a;
    for (int i = 0; i < b - 1; i++)
    {
        res *= a;
    }
    return res;
}