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

    // insertion  sort 
    for (int i = 1; i < n; i++)
    {
       int j = i;
       while(j>=1) {
            if(v[j]>=v[j-1]) break;
            if(v[j]<v[j-1]) {
                swap(v[j] , v[j-1]);
            }
            j -- ;

       }
       
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}