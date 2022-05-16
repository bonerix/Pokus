#include <iostream>
#include <fstream>

int main()
{
    std::fstream file;
    file.open("nevim.nevim", std::ios_base::out);
    file.close();
}