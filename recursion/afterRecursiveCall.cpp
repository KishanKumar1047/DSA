#include<iostream>
#include<string>

using namespace std ;

void fact(int n) {
    if (n==0) return ;
    fact(n - 1);
    cout<<n<<endl; // output after call
}


int  main () 
{
    int n ;
    cin>>n;
   fact(n);
return 0;
}