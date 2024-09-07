#include <iostream>
using namespace std;

int main()
{
    // float x = 7.90;
    // int y;
    // y = (int)x;
    // cout << y<<endl;

    // bool m = true;// bool typeconversion 
    // cout << m + 8<<endl;

    // char chh = 'a';
    // int o = (int)chh ;// typecasting to get ascii value
    // cout<<o<<endl;
    // cout<<chh + 10 ;

    // print fraction part of float variable
    // float k = -1.4;
    // int y = (int)k; // -1
    // if (y<0) y = y - 1; // -2
    // float z = (float)y ; // -2.00
    // k = k - z ; // -1.4 + 2 
    // cout<<"Fractional part is : " << k ;// 0.78

// first brackets () , then * / same heiraarchy then + - left to right.
// ()
    int i = 2*3/4 + 4/4 + 8 - 2 + 5/8 ;
    // it is like 2*3/4 = 1 (int value) & 4/4 = 1 & 5/8 = 0 (int value)
    cout<<i ;

    return 0;
}