#include "Console.h"
#include <iostream>
//using namespace std;

Console::Console(std::string name)
{
    m_name = name;
}

void Console::writeLine(std::string line)
{
    std::cout << "[" << m_name << "]" << line << std::endl;
}