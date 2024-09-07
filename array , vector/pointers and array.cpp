#include<iostream>
using namespace std ;
int  main () 
{
    int arr[] = { 5 ,6, 7, 34, 6, 4,} ;
     // int* ptr = arr; 
    int* ptr = &arr[0]; 
    // arr == &arr[0] == address of first element of array
    // can't wrile like arr[0] or &arr
    cout<<ptr<<endl;
     ptr[0] = 8; // *ptr = 8 , both equal
    for(int i =0 ; i<6;i++) {
        cout<<ptr[i]<<" " ; // also i[ptr] == i[arr]
    }
    cout<<endl;
// both loop same thing

    for(int i =0 ; i<6;i++) {
        cout<<*ptr<<" " ;
        ptr ++ ;
    }
    ptr = arr;

return 0;
}
 