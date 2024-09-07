#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    cout << "Enter string ";
    cin >> s;
    int n = s.length();
    string str = "";

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'X')
        {
            str.push_back(s[i]);
        }
    }
    int m = str.length();

    cout << str << endl;
    // bubble sort - stable sort
    bool flag;
    for (int i = 0; i < m - 1; i++)
    {
        flag = false;
        for (int j = 0; j < m - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                // swap
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;

                flag = true;
            }
        }
        if (flag != true)
        {

            break;
        }
    }

    cout << str;

    return 0;
}