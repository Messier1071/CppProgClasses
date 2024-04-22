#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stdexcept>
using namespace std;
int main(int argc, char const *argv[])
{
    if (argc > 2)
    {
        throw "Too Many Arguments";
    }

    cout << argc;
    cout << "\n";
    for (int i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }

    return 0;
}
