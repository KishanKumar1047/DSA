// PUSH ZERO TO END WHILE MAINTAINNG RELATIVE ORDER OF OTHER ELEMENTS 
#include <iostream>
#include <algorithm>
#include <vector>
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
    vector<int> v = { 5 , 0 , 1 , 2, 0  , 0  ,4 , 0, 3} ;
    int n = v.size() ;

    // bubble sort  

    for (int i = 0; i < n - 1; i++)
    {
      
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] == 0)
            {
                // swap
                int  temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;

            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}