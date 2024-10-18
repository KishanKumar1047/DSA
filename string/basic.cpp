#include <iostream>
#include <string>
using namespace std;
int main()
{
    // char str[5] = {'a', 'b', 'c', 'd', 'e'};
    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    // char str[5] = {'a' , 'b' , 'c' , 'd' , 'e' , '\0} ; // in real life "\0" - to terminate
    //  char str[5] = "abcd" ;
    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }

    // cout << endl;
    // cout << str[5];
    // cout << endl;
    // cout << str << endl;
    // cout << (int)str[5];
    //  char ch = '\0' ;
    // cout<<(int)ch ;
    return 0;
}