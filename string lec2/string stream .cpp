#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    //   string str =  " Ram Is Good As Me " ;
    string str;
    getline(cin, str);
    stringstream ss(str);
    string temp;
    while (ss >> temp)
    {
        cout << temp << endl;
    }

    return 0;
}