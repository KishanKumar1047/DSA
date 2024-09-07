// #include<iostream>
// using namespace std ;
// int  main () 
// {
    // for(int i = 0 ;  i <4 ; i++) {
    //     for(int j = 1 ; j <= 4; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n" ;
    // }
// return 0;
// }

#include<iostream>
using namespace std;

int main () {
	  for (int i = 6 ;i<=6 ; i--) {
	  	for(int j = 1 ;j<i ; j++) {
	  		cout<< "*" ;
		  }
		  cout<<"\n" ; // triangle star pattern
	  }
	  return 0;
}
