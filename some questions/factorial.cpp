#include<iostream>
using namespace std ;
int fact(int x) {
    int f = 1;
    for(int i = 2 ;i<= x;i++) {
        f *= i;
    }
    return f;
}

int  main () 
{
    int x ;
    cout<<"Enter Number :";
    cin>>x;
    for(int i = 1; i<=x;i++){
        cout<<fact(i)<<endl;
    }
return 0;
}