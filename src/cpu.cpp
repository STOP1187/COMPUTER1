#include "cpu.h"
#include "ram.h"
#include <iostream>




void sum() {

    int buffer[8];
    read(buffer);
    int total = 0;

    for (int i = 0; i < 8; ++i)
    {
        total += buffer[i];
    };

    std::cout << "sum: " << total << std::endl;

};