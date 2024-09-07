// 2d array  to rotate it by 90 degree for sqy=uare matrix
// s1 - take transpose . s2 - then reverse rows
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

// transpose modification for array
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
cout<<endl;

// reversing row
for (int k = 0 ; k<m; k++)  {
    int i = 0;
    int j = m - 1 ;
    while(i<j) { //  swap between (k,i) and (k , j)
        int temp = arr[k][i] ;
        arr[k][i] = arr[k][j] ;
        arr[k][j] = temp ;
        i++ ;
        j-- ;
    }
}
// final rotated matrix
    for (int i = 0 ; i<m; i++) {
    for(int j = 0 ; j< m ; j++) {
          cout<<arr[i][j] ;

    }
} 


    return 0;
}