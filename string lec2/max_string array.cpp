#include<iostream>
#include<string>
#include<vector>
using namespace std ;
int  main () 
{
    string arr[] = { "0123" , "12345" , "6789" , "23014" } ;
    int max = stoi(arr[0]) ;
    string maxs = arr[0] ;

    for(int i = 0 ; i<4 ; i++) {
        int x = stoi(arr[i]) ;
        if(x>max) {
            max = x ;
            maxs = arr[i] ;
        }
    }
    cout<<max  ;
return 0;
}