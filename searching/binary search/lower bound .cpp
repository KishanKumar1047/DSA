#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int x = 19;
    // LINEAR SEARCH

    // for ( int i = 0 ; i< n ; i++) {
    //     if (arr[i] > x) {
    //         cout<<arr[i-1];
    //         break ;
    //     }
    // }

    // BINARY SEARCH
    int i = 0;
    int j = n - 1;
    bool flag = false ;
    while (i <= j)
    {
        // int mid = (i + j) / 2;
        int mid = i + (j - i) / 2;
        if (arr[mid] == x)
        {
            flag = true ;
            cout << arr[mid - 1];
            break;
        }
        else if (arr[mid] < x)
            i = mid + 1;
        else
            j = mid - 1;
    }

    if (flag ==false ) cout<<arr[j];
    return 0;
}