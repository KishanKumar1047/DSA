#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    // string str = " tohra mai ke chodo ";
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
   
    string str = "abcde";
    // str.push_back('m');
    // str.push_back('n');
    // str.push_back('o');
    // cout<<str<<endl ;
    // str.pop_back();
    // str.pop_back();
   // cout<<str<<endl ;


     // string concatation

   //  str = "xyz" + str ;
    // string t = "loliyan" ;
    // str = str + " "   + t ;

    //  cout<<str<<endl ;
    
    // reverse
 // reverse(str.begin() , str.end()) ;
  reverse(str.begin() + 3 , str.end()) ;
    cout<<str ;
    
    return 0;
}