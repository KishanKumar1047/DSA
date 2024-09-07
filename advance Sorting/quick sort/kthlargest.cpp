#include <iostream>
#include <string>
#include <vector>
using namespace std;

int partition(int arr[], int si, int ei)
{
    int pivotElement = arr[(si + ei) / 2];
    //
    int count = 0;
    for (int i = si; i <= ei; i++)
    {
        if (i == (si + ei) / 2)
            continue;
        if (arr[i] < pivotElement)
            count++;
    }
    int pivotidx = count + si;
    swap(arr[(si + ei) / 2], arr[pivotidx]); // swap with pivot element
    int i = si;
    int j = ei;
    while (i < pivotidx && j > pivotidx)
    {
        if (arr[i] <= pivotElement)
            i++;
        if (arr[j] > pivotElement)
            j--;
        if (arr[i] > pivotElement && arr[j] <= pivotElement)
        {
            swap(arr[j], arr[i]);
            i++;
            j--;
        }
    }
    return pivotidx;
}

int kthelement(int arr[], int si, int ei, int k)
{
    int pi = partition(arr, si, ei);
    if (pi + 1 == k)
        return arr[pi];
    else if (pi + 1 < k)
        return kthelement(arr, pi + 1, ei, k);
    else
        return kthelement(arr, si, pi - 1, k);
}

int main()
{
    int arr[] = {3,2,3,1,2,4,5,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int k = 9; // 
     k = n - k + 1 ;
    cout<<kthelement(arr, 0, n - 1 , k);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}