#include <iostream>
#include <fstream>

int main()
{
    std::fstream file;
    file.open("C:\\Users\\pajam\\Desktop\\random.nesahat", std::ios_base::out);
    file.close();
}