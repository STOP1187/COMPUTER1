#include "gpu.h"
#include <iostream>


void display(int buffer)
{
    for (int i = 0; i < 8; ++i)
    {
        std::cout << buffer[i] << std::endl;
    };
};