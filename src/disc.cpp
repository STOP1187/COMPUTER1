#include "disc.h"
#include <iostream>
#include <fstream>
#include <vector>


std::vector<std::string> bufferIn;
std::string in;
std::vector<std::string> out;

void save()
{

    std::ifstream saveIn("E:\\homeWork C++\\untitled2\\data.txt");

    while (!saveIn.eof())
    {


        saveIn >> in;
        bufferIn.push_back(in);

    };

    saveIn.close();

};

void load()
{

    std::ofstream loadOut("E:\\homeWork C++\\untitled2\\data.txt");

    for (int i = 0; i < out.size(); ++i) {

        loadOut << std::endl << out[i];

    };

    loadOut.close();

};

