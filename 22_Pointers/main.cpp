#include <iostream>

using namespace std;

int main()
{
    int age = 10;
    int *pAge = &age; // store the pointer for the variable 'age'; pointer is just another information in terms of the variables

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;

    cout << "Age: " << &age << endl; // print out the memory address of the variable 'age'; We also call it the pointer of the variable 'age'
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    cout << endl;

    cout << "Age: " << pAge << endl; // print out with the pointer variables
    cout << "GPA: " << pGpa << endl;
    cout << "Name: " << pName << endl;

    cout << endl;

    // we are going to de-referencing the pointer
    cout << "What is the age: " << *pAge << endl;
    cout << "What is the gpa: " << *pGpa << endl;
    cout << "What is the name: " << *pName << endl;


    return 0;
}
