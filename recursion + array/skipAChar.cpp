#include<iostream>
#include<string>
using namespace std ;

void removechar(string ans, string original , int idx) {
    if(idx == original.length()) {
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch == 'a') removechar(ans , original,idx + 1);
    else removechar(ans + ch , original,idx + 1);
}



int  main () 
{
    string s = "kishan bhai is gaaood gauya .";
    removechar("", s,0);

   
return 0;
}