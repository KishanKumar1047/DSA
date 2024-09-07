#include<iostream>
#include<vector>
using namespace std ;
int  main () 
{
vector <int> height  = { 0 , 1 , 0 , 2 , 1 , 0 , 1, 3 , 2, 1, 2 , 1} ;
int n = height.size() ;
// previous greatest element
int prev[n] ;
prev[0] = -1;
int max = height[0] ;
for (int i = 1; i<=n-1; i++) {
     prev[i] = max ;
     if (max < height [i]) {
        max = height[i] ;
     }
}
 // next greatest element
int next[n] ;
next[n - 1] =-1 ;
max = height[n - 1] ;
for (int i = n - 2; i>= 0 ; i--) {
     next[i] = max ;
     if (max < height [i]) {
        max = height[i] ;
     }
}
// minumum elemt of prev and next 
// int minm[n] ;
// for(int i = 0 ; i<n ; i++) {
//     minm[i] = min(prev[i] , next[i]) ;
// }


for(int i = 0 ; i<n ; i++) {
    prev[i] = min(prev[i] , next[i]) ;
}
// calculating water
int water = 0;
for(int i = 1 ; i<n-1 ; i++) 
{
    if (height[i]<prev[i]) {
        water += prev[i] - height[i] ;
    }
}
// {
//     if (height[i]<minm[i]) {
//         water += minm[i] - height[i] ;
//     }
// }

cout<<"Water can be trapped ="<<water ;

return 0;
}