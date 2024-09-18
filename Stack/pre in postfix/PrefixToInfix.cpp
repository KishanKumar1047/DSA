#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
// we need one stack
string solve(string val2, string val1, char ch)
{
    string sp = "";
    sp += val1;
    sp.push_back(ch);
    sp += val2;
    return sp;
}


int main()
{
    string s = "-/*+79483";
    // need of one stack
    stack<string> val;
    int n = s.size();
    for (int i = n-1; i >=0; i--)
    {
        // need to check if s[i] is digit
        // int ascii = int(s[i]);
        // if(ascii>=48 && ascii<= 57) // 0-9
        if (s[i] >= 48 && s[i] <= 57)
        { // typecasting to integer
             val.push(to_string(s[i] - 48));
        }
        else
        {
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val2,val1,s[i]);
            val.push(ans);  
        }
        
    }
    cout << val.top() << endl;
    return 0;
}