#include<iostream>
using namespace std ;
// swap two number , simply basic @1
int main( ) {
    int a , b;
    cout<<"Enter number :" ;
    cin>>a ;
    cout<<"Enter number :" ;
    cin>>b ;
    // swap(a,b) ;
    int c ;
    c = b;
    b = a;
    a = c;
    cout<<"Enter a: "<<a<<endl ;
    cout<<"b :"<<b;

    return 0;
}
