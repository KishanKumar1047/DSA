#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 8, 9, 15, 18, 21, 24};
    int n = 11;
    // // o(n) // linear search
    // for (int i = 0; i < n; i++)
    // {
    //     if (i != arr[i])
    //     {
    //         cout << i;
    //         break;
    //     }
    // }

    // binary search
    int i = 0;
    int j = n - 1;
    int ans = -1;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == mid)
        {
            i = mid + 1;
        }
        else
           {
             ans = mid;
            j = mid - 1;
           }
    }

    cout << ans;

    return 0;
}