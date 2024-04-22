/*
1) Desenvolva um programa em C++ que realize a leitura de 10 valores em
ponto flutuante. Fornecer ao fim em tela, o valor mínimo, máximo, e a média.
Desenvolver com arrays
*/
#include <iostream>
#include <stdlib.h>
#define size 10

using namespace std;
int main(int argc, char const *argv[])
{
    float arr[size];
    float temp = 0;
    int i;
    float min = 0, max = 0, avg = 0;

    for (i = 0; i < size; i++)
    {
        arr[i] = 0;
    }

    for (i = 0; i < size; i++)
    {
        cin >> temp;
        arr[i] = temp;
    }

    //* getting average
    temp = 0;
    for (i = 0; i < size; i++)
    {
        temp = temp + arr[i];
    }
    avg = temp / size;

    //* getting highest value
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    //*getting the smallest value
    min = max;
    for (i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << min;
    cout << "\n";
    cout << max;
    cout << "\n";
    cout << avg;
    cout << "\n";
    return 0;
}
