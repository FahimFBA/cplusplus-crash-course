#include<iostream>
using namespace std;

int main()
{
    // cout << "Roses are red" << endl;
    // cout << "Violates are blue" << endl;
    // cout << "I love you" << endl;

    string color, pluralNoun, name;

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter a plural noun which is blue in color: ";
    getline(cin, pluralNoun);

    cout << "Enter a name: ";
    getline(cin, name);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << name << endl;

}