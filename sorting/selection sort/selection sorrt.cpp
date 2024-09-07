// PUSH ZERO TO END WHILE MAINTAINNG RELATIVE ORDER OF OTHER ELEMENTS
#include <iostream>
#include <algorithm>
#include <vector>
#include<climits>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter number of elements for array ";
    // cin >> n;
    // vector<float> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    vector<int> v = {5, 3, 1, 4, 2};
    int n = v.size();

    // selection  sort 
    for (int i = 0; i < n-1; i++)
    {
        int c = INT_FAST16_MAX ;
        int idx = -1 ;
        for (int j = i ; j < n; j++)
        {
            if (c > v[j])
            {
                c = v[j];
                idx = j ;
            }
        }
         
        swap(v[i], v[idx]) ;
       
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}