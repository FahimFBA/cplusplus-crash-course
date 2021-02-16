#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    // Age

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    // Grade

    char grade;
    cout << "Enter your grade: ";
    cin >> grade;
    cout << "You got " << grade << " in that subject." << endl;

    // I need to flush the input buffer.
    cin.clear(); cin.sync();

    // Name

    string name;
    cout << "Enter your name: ";
    getline(cin, name); // substitute of gets in C program
    cout << "Hello " << name << endl;







    return 0;
}