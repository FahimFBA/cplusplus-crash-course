#include<iostream>

using namespace std;

int main()
{
    int n1, n2, sum, sub, div, rem;
    cout << "Enter the first number: " ;
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    sum = n1 + n2;
    cout << "Summation of the two integer numbers: " << sum << endl;
    sub = n1 - n2;
    cout << "Subtraction of the two integer numbers: " << sub << endl;
    div = n1 / n2;
    cout << "Division of the two integer numbers: " << div << endl;
    rem = n1 % n2;
    cout << "Remainder is: " << rem; 
    return 0;
}