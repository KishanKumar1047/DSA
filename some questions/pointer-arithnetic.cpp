 // #include<iostream>
// using namespace std ;
// int  main () 
// {
//       int x = 6;
//     int* p = &x ;
//       cout<<p<<endl;
//     cout<<x<<endl;// value of x
//     p = p + 1 ;
//     cout<<p<<endl; // change in address value 
//       cout<<*p<<endl;// chnage in value
// return 0;
// }

// #include<iostream>
// using namespace std ;
// int  main () 
// {
//     int a = 15;
//     int *p = &a;
//     // int b = ++*p;// first value update and used then
//     int b = (*p)++;// post increment , first used then increase
//     cout<<a<<" "<<b;
// return 0;
// }

// write a function to find out the last digit and first digit of number


// #include<iostream>
// using namespace std ;
// int  main () 
// {
//  int n ; cin>>n;
//  int fd = n%10; // algo 
//  int ld ;
//  while(n>9) {
//     n = n / 10;

//  }
//  fd = n ; 
//  cout << fd & nd 
// return 0;
// }

#include<iostream>
using namespace std ;

void find(int n, int* ptr1 , int* ptr2) {
    *ptr2 = n%10;
    while(n>9) {
        n = n / 10;
    }
    *ptr1 = n ;
    return ;

}

int  main () 
{
    int n ; 
    cout<<"Enter Number : ";
    cin>>n;
    int firstdigit , lastdigit;
    int* ptr1 = &firstdigit;
    int* ptr2 = &lastdigit;
    find(n,ptr1, ptr2);
    cout<<firstdigit <<"&"<<lastdigit;

return 0;
}