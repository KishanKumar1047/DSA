#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
// we need one stack
int solve(int val2 , int val1 , char ch){
    if (ch=='+') return val1 + val2;
    else if (ch=='-') return val1 - val2;
    else if (ch=='*') return val1 * val2;
    else  return val1 / val2;
}


int main()
{
    string s = "-/*+79483";
    // need of one stack
    stack<int> val;
    int n = s.size();
    for (int i = n-1; i >=0; i--)
    {
        // need to check if s[i] is digit
        // int ascii = int(s[i]);
        // if(ascii>=48 && ascii<= 57) // 0-9
        if (s[i] >= 48 && s[i] <= 57)
        { // typecasting to integer
            val.push((s[i] - 48));
        }
        else
        {
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = solve(val2,val1,s[i]);
            val.push(ans);  
        }
        
    }
    cout << val.top() << endl;
    return 0;
}