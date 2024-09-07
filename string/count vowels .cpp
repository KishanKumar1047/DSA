#include<iostream>
#include<string>
using namespace std ;
int  main () 
{ 
    int n ; 
    char string[n] ;
    cout<<"Enter length of string : ";

    cin>>n ;
       // Dynamically allocate the array after knowing the size
    // char *string = new char[n];
    for(int i = 0 ; i< n ; i++) {
        cin>>string[i] ;
    }
    int count = 0;
    for (int i = 0 ; i<n ; i++) {
        if ( string[i] == 'a' || string[i] == 'i' || string[i] == 'e' || string[i] == 'o' ||  string[i] == 'u' ) {
            count ++ ;

        }

    }
    cout<<count ;


return 0;
}