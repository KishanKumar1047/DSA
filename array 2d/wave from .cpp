// wave form or say mirror of S . ..using 2d array
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int m;
    cout << "enter number of rows for 1st matrix :";
    cin >> m;
    int n;
    cout << "enter number of column for 1srt matrix :";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}