// given two s and t string is they are anagram then print yes

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ;
int  main () 
{
    bool flag = false ;
    string s = "physicswallah" ;

    string t = "wallahphysics" ;
    int n = s.size() ;

    sort(s.begin() , s.end()) ;
    sort(t.begin() , t.end()) ;

    // for (int i = 0 ; i<n ; i++) {
    //     if(s[i]==t[i]) {
    //         flag = true ; ;
    //     }
    // }
    //  if (flag == true) {
    //     cout<<"YES" ;
    //  }

    if (s==t) {
        cout<<"yes" ;
    }
    else {
        cout<<false ;
    }
return 0;
}