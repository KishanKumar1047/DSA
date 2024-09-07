#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ;
int  main () 
{
    vector<string> strs ;
    strs.push_back("flowers") ;
    strs.push_back("flies") ;
    strs.push_back("flight") ;

        int n = strs.size() ;
        if (n == 1) cout<< strs[0];
        sort(strs.begin(),strs.end()) ;
        string first = strs[0] ;
        string last = strs[n - 1] ;
        string s = "" ;
        for(int i  =0 ;i<min(first.size() ,last.size()) ;  i++) {
            if(first[i]==last[i]) {
                s+= first[i] ;
            }
            // else cout<< s;

        }
        cout<< s;
    
return 0;
}