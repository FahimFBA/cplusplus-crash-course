#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int luckyNums[] = {4,8,15,16,23,42};

    cout << luckyNums[3] << endl;

    luckyNums[3] = 200; // changing the value

    cout << luckyNums[3] << endl;

    int luckyNums[20] = {4,8,15,16,23,42};

    // We can add value later in the blank allocated space in the array

    luckyNums[10] = 200; // changing the value

    cout << luckyNums[10] << endl;



    return 0;
}