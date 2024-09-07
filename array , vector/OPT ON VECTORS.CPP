// OPERATIONS ON VECTORS AND ABOUT V.SIZE , POP
#include<iostream>
#include<vector>
using namespace std ;
int main () {
    vector<int> v;

    v.push_back(9);
    v.push_back(8);
    v.push_back(4);
    v.push_back(2);
    v.push_back(12);
    v.push_back(90);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(94);
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);
    v.push_back(7 );

    for(int i= 0; i < v.size() ; i++) {
        cout<<v[i]<<" " ;
    }
    cout<<endl;
    v.pop_back(); // remove last element
    v.pop_back(); // remove size not capacity
     for(int i= 0; i < v.size() ; i++) {
        cout<<v[i]<<" " ;
    }
    return 0;
}