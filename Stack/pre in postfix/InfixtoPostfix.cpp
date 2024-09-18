#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

// priority function
int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

string solve(string val2, string val1, char ch)
{
    string sp = "";
    sp += val1;
    sp += val2;
    sp.push_back(ch);
    return sp;
}

int main()
{
    string s = "(7+9)*4/8-3";
    //string s = "2+6*4/8-3";
    // need of two extra stack
    stack<string> val;
    stack<char> op;
    for (int i = 0; i < s.size(); i++)
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
            if (op.size() == 0) op.push(s[i]);
            else if (s[i] == '(') op.push(s[i]);
            else if (op.top() == '(') op.push(s[i]);
            else if (s[i] == ')')
            {
                while (op.top() != '(')
                {
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val2, val1, ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if (prio(op.top()) < prio(s[i]) ) op.push(s[i]);
            else
            { // prio(op.top()) > prio(s[i])
                while (op.size() > 0 && prio(op.top()) >= prio(s[i]))
                {
                    // to do operation
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val2, val1, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // it may be stack is not emoty
    while (op.size() > 0)
    {
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val2, val1, ch);
        val.push(ans);
    }
    cout << val.top() << endl;
    return 0;
}