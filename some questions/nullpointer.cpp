#include<iostream>
using namespace std ;
int  main () 
{
    int* prt = NULL ; // null pointer with address 0 
    cout<< prt ; // null = 0
return 0;
}

// double pointer - store adress of pointer

// #include<iostream>
// using namespace std ;
// int  main () 
// {
//     int x = 5;
//     int* ptr = &x;
//     int** p = &ptr ; // double pointer
//     cout<<x<<endl;//5
//     cout<<*ptr<<endl;//5
//     cout<<**p<<endl;//5
// return 0;
// }

// #include<iostream>
// using namespace std ;
// int  main () 
// {
//     int x = 5;
//     int* ptr = &x;
//     int** p = &ptr ; // double pointer
//     cout<<&x<<endl;//address of variable x
//     cout<<ptr<<endl;//address of variable x
//     cout<<*p<<endl;//address of variable x
// return 0;
// }

// #include<iostream>
// using namespace std ;
// int  main () 
// {
//     int x = 5;
//     int* ptr = &x;
//     int** p = &ptr ; // double pointer
//     cout<<x<<endl;//5
//     cout<<ptr<<endl;//adress of x
//     cout<<p<<endl;//address of pointer
// return 0;
// }