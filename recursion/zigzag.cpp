#include<iostream>
using namespace std ;

void zigzag(int n) {
    if(n==0) return ;
    cout<<n; // pre
    zigzag(n-1); // call1
    cout<<n; // in
    zigzag(n-1); // call 2
    cout<<n; // post
}
// do dry run with help of stack
int  main () 
{ 
    zigzag(3);
return 0;
}