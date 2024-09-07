#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows for 1st matrix :";
    cin >> m;
    int n;
    cout << "enter number of column for 1srt matrix :";
    cin >> n;

    int p;
    cout << "enter number of rows for 2nd matrix:";
    cin >> p;
    int q;
    cout << "enter number of column for 2nd matrix :";
    cin >> q;
    if (p == n)
    {
        int a[m][n];
        cout << "Enter eleemts for 1st matrix :";
        cout << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int b[p][q];
        cout << "Enter eleemts for 2nd matrix :";
        cout << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
            cout << endl;
        }
        // resultant
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                // int res[m][q] = a[i][0] * b[0][j] + a[i][1] * b[1][j] +
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j]<<" ";
            }
        cout<<endl;
        }
    }

    else
    {
        cout << "matrices can't be multiplied .";
    }
    return 0;
}