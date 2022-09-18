#include <iostream>

using namespace std;

int main()
{

    string phrase = "Giraffe Academy\n"; // we can also use \n to tell C++ that we want to change to a new line
    cout << phrase;
    cout << phrase.length() << endl; //16

    string phrase2 = "Giraffe Academy";
    cout << phrase2.length() << endl; //15 as phrase2 has no \n at end, it has one less length than phrase1
    cout << phrase2[0] << endl;

    string phrase3 = "Giraffe Academy";
    phrase3[0] = 'B';
    cout << phrase3 << endl;
    cout << phrase3.find ( "Academy", 0 ) << endl; //8 string(keyword,startPoint) return the starting index of the keyword inside the original string

    string phrase4 = "Giraffe Academy";
    cout<<phrase4.substr(8,3)<<endl; //Aca string.str(startingIndex,length) return the substring which start at the <startingIndex>, and have the certain length <Length> from the original string


    cout << "Hello" << endl; // endl tells the C++ that we want to print a new line instead of printing on the same line

    return 0;
}
