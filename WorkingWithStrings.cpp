#include<iostream>
using namespace std;
int main()
{
    cout << "Hey!" << endl;
    cout << "I am Fahim!" << endl;
    cout << "Checking the new line character\n";
    cout << "It works!" << endl;
    string phrase = "Fahim Bin Amin";
    cout << phrase;
    cout << "\nI will be checking the length of this phrase." << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    phrase[0] = 'C';
    cout << phrase[0] << endl;
    cout << phrase.find("Amin" , 0) << endl;
    cout << phrase.substr(6, 3) << endl;
    return 0;
}