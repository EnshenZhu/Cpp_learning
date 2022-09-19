#include <iostream>

using namespace std;

int power ( int baseNum, int powNum )
{
    int result = 1;
    for ( int i = 0; i < powNum; i++ )
    {
        result *= baseNum;
    }
    return result;
}

int main()
{
    cout << power ( 3, 4 ) << endl;
    cout << power ( 2, 5 ) << endl;
    return 0;
}
