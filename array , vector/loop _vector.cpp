// check for occurance
#include <iostream>
#include <vector>

using namespace std; 

int main () {
    vector<int> v;
    int x ;
    cout<<"Enter number to check its occurance : " ;
    cin>>x;
    int n ;
    cout<<"Enter number for elements to go : " ;
    cin>>n;
    for(int i = 0 ; i<n ; i++) {
        int m ;
        cin>>m;
        v.push_back(m);

    }
     cout<<endl;

    for(int i = 0 ; i< n ; i++) {
        
        cout<<v.at(i)<<" ";

    }
    cout<<endl;
    int count = -1;
    for(int i = 0 ; i< n ; i++) {
        if(v[i] == x) {
            count = i ;
        }
    }
    cout<<count;

    return 0;
}