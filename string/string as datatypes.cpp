#include<iostream>
#include<string>
using namespace std ;
int  main () 
{ 
    // string declaartion
    // string str = " rajan kiasjannajhfhtj";
    // cout<<str<<endl;
    // cout<<str[3]<<endl;
    // cout<<sizeof(str) ;

    // taking input 

    string s;
  //  cin>>s ; // take on eword of input
    getline(cin , s); // for full name , after spaces
    cout<<s ; 
return 0;
}