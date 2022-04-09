#include "disc.h"
#include "ram.h"
#include <fstream>




void save()
{

    std::ofstream out("E:\\homeWork C++\\untitled2\\data.txt");
    int buffer[8];
    read(buffer);

    for (int i = 0; i < 8; ++i)
    {
        out << buffer[8] << std::endl;
    };

};

void load()
{

    std::ifstream in("E:\\homeWork C++\\untitled2\\data.txt");
    int buffer[8];

    for (int i = 0; i < 8; ++i)
    {
        in >> buffer[8];
    };


};

