#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int  main () 
{
    vector<int> v = {1 ,2 , 1,  2,1 , 2, 2, };
    int n = v.size();

    // for(int i = 0 ; i<n;i++) {  // above code have exceeding time limit
    //     int count = 1;
    //     for(int j = i +1 ; j<n; j++) {
    //         if(v[i]==v[j]) {
    //             count++ ;
    //         }
    //     }
    //     if(count>n/2) {
    //         cout<<v[i];
    //     }
    // }

    sort(v.begin(),v.end());
    cout<<v[(n/2)];


return 0;
}

// 13 min onwards


