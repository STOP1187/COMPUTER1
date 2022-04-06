#include <iostream>
#include <string>

#include "cpu.h"
#include "disc.h"
#include "gpu.h"
#include "kbd.h"
#include "ram.h"

int main()
{


    std::string command;

    std::cout << "Enter command: sum, save, load, input, display, exit" << std::endl;
    std::cin >> command;

    while (command != "exit")
    {
        if (command == "sum")
        {
            sum();
        }
        else if (command == "save")
        {
            save();
        }
        else if (command == "load")
        {
            load();
        }
        else if (command == "input")
        {
            input();
        }
        else if (command == "display")
        {
            display();
        }
    }

    std::cout << "I'm sleep" << std::endl;




}