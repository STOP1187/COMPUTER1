#include "cpu.h"
#include "ram.h"




int compute() {

    int total = 0;

    for (int i = 0; i < 8; ++i)
    {
        total += buffer[i];
    };

    return total;

};