// transpose of a matrix in same aaray
#include <iostream>
using namespace std ;


int main() {
    // Write C++ code here
    int arr[3][2] = { 7 , 8 , 9, 10 ,11,12 } ;
   
    

        for (int i = 0 ; i<3; i++) {
    for(int j = 0 ; j< 2 ; j++) {
          cout<<arr[i][j] ;
        }
    }
    cout<<endl;
    
    for(int j = 0 ; j< 2; j++) {
        for (int i = 0 ; i<3 ; i++) {
          cout<<arr[i][j] ;
        }
    }
    

    return 0;
}