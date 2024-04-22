#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

const int SCR_SIZE = 80; // some way of telling size

int main()
{
    int i = 0;
    while (true)
    {
        cout << "[" << i << "]" << (char)i << endl;
        i++;
        if (i > 127)
        {
            break;
        }
    }

    return 0;
}