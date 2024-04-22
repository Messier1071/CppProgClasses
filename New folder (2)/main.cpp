#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[])
{
    // 1-38
    int cc = 1, // current chevron (last)
        nc = 0, // next chevron to be engaged (current)
        DD = 1, //
        DI = 1,
        min = 1,
        max = 10;

    cout << "1-38" << endl;
    cin >> cc;
    cin >> nc;

    DD = cc - nc;
    DI = max - abs(DD);

    /*
    Dd positivo Di em sentido horario e DD em anti horario
    DD negativo di em anti horario e DD em horari
    */
    cout << "DD:" << DD << endl
         << "DI:" << DI << endl;

    if (DD > 0)
    {
        if (abs(DD) < DI)
        {
            cout << "CounterClockwise" << endl;
        }
        else
        {
            cout << "Clockwise" << endl;
        }
    }
    else
    {

        if (abs(DD) < DI)
        {
            cout << "Clockwise" << endl;
        }
        else
        {
            cout << "CounterClockwise" << endl;
        }
    }

    // cout << count << endl;
    // cout << In1 << endl;
    return 0;
}
