#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    // string s = "abcfsdr" ;

    //  // s.substr(index , length)
    // cout<<s.substr(3 , 3) ; // sdr

    string s;
    getline(cin, s);
    cout << s << endl;
    int n = s.length();
   
    cout <<  s.substr(n / 2) << endl;
    return 0;
}