#include "ram.h"
#include <iostream>




int write()
{


    std::cout << "enter 8 numbers" << std::endl;

    for (int i = 0; i < 8; ++i)
    {
        std::cin >> buffer[i];
    };

};

int read()
{
    for (int i = 0; i < 8; ++i)
    {
        std::cout << buffer[i] << std::endl;
    };

};

