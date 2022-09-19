#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 10 % 3 << endl; //1 10 mode 3
    cout << 10 / 3 << endl; //3 由于除数和被除数均为int，故结果也为int （舍弃了小数位）
    cout << 10.0 / 3.0 << endl; //3.33333333

    int wnum = 5;
    double dnum = 5.5;

    cout << wnum++ << endl; //5 executes the statement and then increments the value 先执行打印再增值
    cout << wnum << endl;

    wnum = 5;
    cout << ++wnum << endl; //6 increments the value and then execute the statement 先增值再执行打印
    cout << wnum << endl;

    wnum = 5;
    wnum /= 80;
    cout << wnum << endl; //0

    cout << pow ( 2, 5 ) << endl; //32 require cmath

    cout << sqrt ( 36 ) << endl; //6 require cmath
    cout << sqrt ( 36.22 ) << endl; //6 require cmath

    cout << round ( 4.3 ) << endl; //4 四舍五入
    cout << round ( 4.7 ) << endl; //5 四舍五入
    cout << ceil ( 4.7 ) << endl; //5
    cout << floor ( 4.7 ) << endl; //4

    cout << fmax ( 10, 3 ) << endl; //10 return 10 and 3 which one is bigger
    cout << fmin ( 10, 3 ) << endl; //3


    return 0;
}
