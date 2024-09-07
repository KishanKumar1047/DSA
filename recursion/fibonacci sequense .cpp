#include<iostream>
#include<string>
// 1 1 2 3 5 8 13...

//  Euler tree diagram 
// t.c = (2^n)
using namespace std ;

int fib(int n) {
    if (n == 2 || n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}


int  main () 
{
    int n ;
    cin>>n;
    cout<<"fib "<<n<<"th term is :"<<fib(n);
return 0;
}