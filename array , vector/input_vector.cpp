#include<iostream>
#include<vector>
using namespace std ;
int main () {
    // vector<int> v(5) ;  // if size is known
    // for(int i = 0 ; i<5 ; i++) {
    //     cin>>v[i];
    // }
    // cout<<endl;
    // for(int i = 0 ; i<5 ; i++) {
    //     cout<<v[i]<<" " ;
    // }

        vector<int> v ;  // if size is known
    for(int i = 0 ; i<5 ; i++) {
        int x;
        cin>>x;
        v.push_back(x) ;
    }
        for(int i = 0 ; i<5 ; i++) {
        cout<<v[i]<<" " ;
    }
    return 0;
}