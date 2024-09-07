// passing aray to functions - address pass to function
// its call by refernce
#include<iostream>

using namespace std ;
void display (int a[] , int size) {   // here a is actually pointer , pointing towards arr , so size should mention too.
    for(int i = 0 ; i<size ; i++) { // int a[] == int* a
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change (int b[] , int size ) {
    b[0] = 100;
}
int  main () 
{
    int arr[7] = {1 , 2, 34, 56 ,7 , 8 ,9 };
    int size = sizeof(arr)/sizeof(arr[0]) ;
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
return 0;
}