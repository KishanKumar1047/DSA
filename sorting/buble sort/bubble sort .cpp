#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements for array ";
    cin >> n;
    vector<float> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // bubble sort - stable sort
    bool flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                // swap
                float temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;

                flag = true;
            }
        }
        if (flag != true)
        {
            cout << "array is sorted ";
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}