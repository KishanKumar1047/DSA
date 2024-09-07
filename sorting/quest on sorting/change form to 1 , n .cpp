#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {19, 12, 23, 8, 16};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
     int x = 0;
    // vector<int> v(n , 0);
    // for (int i = 0; i < n; i++)
    // {
    //     int min = INT_MAX;
    //     int idx = -1;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (v[j] == 1)
    //             continue;
    //         else
    //         {
    //             if (min > arr[j])
    //             {
    //                 min = arr[j];
    //                 idx = j;
    //             }
    //         }
    //     }
    //     arr[idx] = x;
    //     v[idx] = 1;
    //     x++;
    //}
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int idx = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j]<=0)
                continue;
            else
            {
                if (min > arr[j])
                {
                    min = arr[j];
                    idx = j;
                }
            }
        }
        arr[idx] = - x;
        x++;
    }


    for (int i = 0; i < n; i++)
    {
        cout << arr[i]*-1 << " ";
    }

    return 0;
}