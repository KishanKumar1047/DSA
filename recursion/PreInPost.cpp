#include<iostream>
using namespace std ;

void pip(int n) {
    if(n==0) return ;
    cout<<"pre "<<n<<endl; // pre
    pip(n-1); // call1
    cout<<"in "<<n<<endl; // in
    pip(n-1); // call 2
    cout<<"post "<<n<<endl; // post
}
// do dry run with help of stack
int  main () 
{ 
    pip(3);
return 0;
}