#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;

    Book()
    {
        title = "no title";
        author = "no author";
        pages = 0;
    };

    Book ( string aTitle, string aAuthor, int aPages ) // this is a constructor
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main()
{
//    string name = "Mike";
//    double pi = 3.14;
//    char favourateLetter = 'G';

    Book book1 ( "Harry Potter", "JK Rowling", 500 ); // 注意：c++中new object的方式与java略不同

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    Book book2;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}
