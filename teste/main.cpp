#include <stdio.h>
#include <iostream>
int main(int argc, char const *argv[])
{
    char c;

    while (1)
    {
        c = std::cin.get();
        std::cout << c << std::endl;
    }

    return 0;
}
