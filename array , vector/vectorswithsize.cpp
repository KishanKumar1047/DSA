#include<iostream>
#include<vector>
using namespace std ;
int  main () 
{ 
    // vector<int>v(5 , 7) ; // array with size = 5 and each elemet = 7 as value.
    // cout<<v[4];

    vector<int>v(5 ) ; // array with size = 5 
    cout<<v[4]; // willshow garbage value = 0.

return 0;
}