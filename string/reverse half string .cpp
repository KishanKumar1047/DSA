#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
   string s ;
   getline(cin , s);
   cout<<s<<endl; 
    int n = s.length() ;


 reverse(s.begin() , s.end() - n/2) ;
 cout<<s<<endl ;

return 0;
}


