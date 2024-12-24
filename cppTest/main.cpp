#include <iostream>
#include "Operation.h"
#include "Tools.h"
#include "Parameters.h"

int main(int argc, char** argv)
{
    std::cout << get_char_array_size(argv[1]) << '\n';
    std::cout << argv[1] << '\n';
    std::cout << check_parameters_as_valid(argv[1]);
}