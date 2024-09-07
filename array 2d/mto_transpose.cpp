// 2d array  to change  it in  transpose for square matrix
#include <iostream>
#include<vector>
using namespace std ;


int main() {
    
    int m ;
    cout<<"Enter nos. of rows/columns:" ;
    cin>>m;
    int arr[m][m];
        for (int i = 0 ; i<m; i++) {
    for(int j = 0 ; j< m ; j++) {
          cin>>arr[i][j] ;
        }
    }
cout<<endl;
// for (int i = 0 ; i<m; i++) {
//     for(int j = 0 ; j< m ; j++) {
//           cout<<arr[i][j] ;

//     }
//}
for (int i = 0 ; i<m; i++) {
    for(int j = 0 ; j< m ; j++) {
        
         if(i<j) {
              int temp = arr[i][j];
           arr[i][j] = arr[j][i] ;
            arr[j][i] = temp ;
         }
    }
}
for (int i = 0 ; i<m; i++) {
    for(int j = 0 ; j< m ; j++) {
          cout<<arr[i][j] ;

    }
}
    

    return 0;
}