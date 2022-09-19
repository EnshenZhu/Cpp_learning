#include <iostream>

using namespace std;

void sayHi ( string name, int age ) // void means return nothing
{
    cout << "Hello " << name << ", you are " << age  << endl;
}

void sayHiTwo ( string name, int age ); // here is an alternative way to represent a function, sayHiTwo is claimed here in a void

int main()
{

    cout << "Top" << endl;
    sayHi ( "Mike", 60 );
    sayHi ( "Bob", 20 );
    sayHiTwo ( "Peter", 12 );
    cout << "Bottom" << endl;

    return 0;
}

void sayHiTwo ( string name, int age ) // sayHiTwo is detail descripted after the main function
{
    cout << "Hello " << name << ", you are " << age  << endl;
}
