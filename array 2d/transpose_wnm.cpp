// transpose of a matrix in new aaray
#include <iostream>
using namespace std ;


int main() {
    // Write C++ code here
    int arr[3][2] = {1 , 2, 3, 4, 5, 6 } ;
    int brr[2][3] ;
    
    for (int i = 0 ; i<3 ; i++) {
        for(int j = 0 ; j< 2 ; j++) {
          brr[j][i] = arr[i][j]   ;
        }
    }
    for (int i = 0 ; i<2 ; i++) {
        for(int j = 0 ; j< 3 ; j++) {
          cout<<brr[i][j] ;
        }
    }
    

    return 0;
}