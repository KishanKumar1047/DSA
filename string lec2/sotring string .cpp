#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;
int  main () 
{
    string s ;
    getline(cin , s) ; // check both word and for sentence
    sort(s.begin() , s.end()) ;
    cout<<s ; // it go throgh ascii value , therefore space comes first
return 0;
}