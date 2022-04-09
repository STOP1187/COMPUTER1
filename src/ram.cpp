#include "ram.h"
#include <iostream>


int buffer[8];

void write(int in[8])
{

    for (int i = 0; i < 8; ++i)
    {
        buffer[i] = in[i];
    };

};

void read(int out[8])
{
    for (int i = 0; i < 8; ++i)
    {
        out[i] = buffer[i];
    };

};

