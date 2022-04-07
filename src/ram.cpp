#include "ram.h"
#include <iostream>




int write(int* buffer)
{


    std::cout << "enter 8 numbers" << std::endl;

    for (int i = 0; i < 8; ++i)
    {
        std::cin >> buffer[i];
    };

};

int read(int* buffer)
{
    for (int i = 0; i < 8; ++i)
    {
        std::cout << buffer[i] << std::endl;
    };
    return buffer[8];
};

int main()
{
    int buffer[8];

};