#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            break;
        }
        else if (i = 0)
        {
            if (s[i] != s[i + 1])
            {
                count++;
            }
        }
        else if (i = n - 1)
        {
            if (s[i] != s[i - 1])
            {
                count++;
            }
        }
        else
        {
            if (s[i] != s[i - 1] && s[i] != s[i + 1])
            {
                count++;
            }
        }
    }
    cout << count++;
    return 0;
}