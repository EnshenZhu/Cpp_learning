#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age: "; // if we input 4,2, the output will be 4
    cin >> age;

    cin.ignore();

    string name;
    cout << "Enter your name: ";
    getline ( cin, name ); // this is special for entering the string

    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;

    return 0;
}
