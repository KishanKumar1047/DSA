
#include<iostream>
using namespace std ;

int main( ) {
    int arr[5] ={2,4,6,8,10} ;
    int sum = 0 ;
    int avg;
    for (int i = 0 ; i<5 ;i++) {
        int m = i + 1;
        sum += arr[i];
        avg = sum/m ;
        cout<<avg<<" " ;

    } ;
    return 0;
}