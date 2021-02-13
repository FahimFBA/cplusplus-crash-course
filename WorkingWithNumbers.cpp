#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << 5 * 7 << endl;

    cout << 10 % 3 << endl;

    int wnum = 5;
    double dnum = 5.5;
    wnum++;
    dnum++;

    cout << wnum << endl;
    cout << dnum << endl;

    wnum--;
    cout << wnum << endl;

    dnum += 80;
    cout << dnum << endl;

    cout << 5+19.8 << endl;

    cout << pow(2 , 4) << endl; // 2^4 = 16

    cout << sqrt(36) << endl;

    cout << round(4.3) << endl;

    cout << ceil (5.2) << endl;

    cout << floor (6.9) << endl;

    cout << fmax ( 5, 15 ) << endl; // max of two numbers

    cout << fmin ( 5, 15 ) << endl; // min of two numbers

    return 0;
}