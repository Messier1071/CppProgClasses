#include <iostream>
#include <stdlib.h>
#include <stdexcept>
using namespace std;
int main(int argc, char const *argv[])
{
    int test[10];
    for (int i = 0; i < 10; i++)
    {
        test[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << test[i] << endl;
        cout << *(test + i) << endl;
    }

    return 0;
}
