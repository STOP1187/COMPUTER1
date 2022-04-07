#include "cpu.h"
#include "ram.h"
#include <iostream>





int compute(int* buffer) {

    int total = 0;

    for (int i = 0; i < 8; ++i)
    {
        total += buffer[i];
    };

    return total;

};