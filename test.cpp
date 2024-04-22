#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{

    int *p = nullptr;
    try
    {
        if (p)
        {
            printf("%i", *p);
        }
        else
        {
            __throw_exception_again;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
