// not running in vs cosde but running in c++
#include<iostream>
using namespace std ;
int  main () 
{
    int m ;
    cout<<"enter number of rows :" ;
    cin>>m ;
    int n ;
    cout<<"enter number of column :" ;
    cin>>n ;
    int arr[m][n] ;
    for (int i = 0 ; i<m ; i++) {
        for (int j = 0 ; j<n ; j++) {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
       for (int i = 0 ; i<m ; i++) {
        for (int j = 0 ; j<n ; j++) {
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
    int max = 0;
    // int max = INT_MIN;
    for (int i = 0 ; i<m ; i++) {
        for (int j = 0 ; j<n ; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j] ;
            }
        }
    }
        cout<<max;


return 0;
}