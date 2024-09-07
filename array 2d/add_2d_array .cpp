
// #include <iostream>
// using namespace std ;


// int main() {
//     // Write C++ code here
//     int arr[3][2] = {1 , 2, 3, 4, 5, 6 } ;
//     int brr[3][2] = {1 , 2, 3, 4, 5, 6 } ;
//     int res[3][2] ;
//     for (int i = 0 ; i<3 ; i++) {
//         for(int j = 0 ; j< 2 ; j++) {
//             res[i][j] = arr[i][j] +  brr[i][j] ;
//         }
//     }
    
//     for (int i = 0 ; i<3 ; i++) {
//         for(int j = 0 ; j< 2 ; j++) {
//              cout<< res[i][j]  ;
//         }
//     }
  

//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;


int main() {
    // Write C++ code here
    int arr[3][2] = {1 , 2, 3, 4, 5, 6 } ;
    int brr[3][2] = {1 , 2, 3, 4, 5, 6 } ;
    
    for (int i = 0 ; i<3 ; i++) {
        for(int j = 0 ; j< 2 ; j++) {
            arr[i][j] = arr[i][j] +  brr[i][j] ;
        }
    }
    
    for (int i = 0 ; i<3 ; i++) {
        for(int j = 0 ; j< 2 ; j++) {
             cout<< arr[i][j]  ;
        }
    }
  

    return 0;
}

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std ;


// int main() {
//     // Write C++ code here
//     int arr[3][2] = {1 , 2, 3, 4, 5, 6 } ;
//     int brr[3][2] = {1 , 2, 3, 4, 5, 6 } ;
    
//     for (int i = 0 ; i<3 ; i++) {
//         for(int j = 0 ; j< 2 ; j++) {
//             cout<<arr[i][j] +  brr[i][j] ;
//         }
//     }

//     return 0;
// }