#include<iostream>
#include<string>
using namespace std ;

void fun(int n){
    if (n==0)return ;
    cout<<"Good Morning"<<endl;
    fun(n - 1);
}
int  main () 
{
    int n ;
    cout<<"Enter count to print ";
    cin>>n;

    fun(n);
return 0;
}