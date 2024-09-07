//  need because of fixed size of rray
//  vector - dynamic array , copy paste and double the array
#include<iostream>
#include<vector>
using namespace std ;
int  main () 
{
    vector<int> v;
    // v.push_back(9);
    // cout<<v.size()<<" ";             // push back means creating size and value insertion
    // v.push_back(7); // again pb means doubling capacity then assign values
    //   cout<<v.size()<<" ";   
    // v.push_back(945);
    //   cout<<v.size()<<" ";   
    // v.push_back(3);
    //   cout<<v.size()<<" ";   
    // v.push_back(6);
    //   cout<<v.size()<<" ";   
    // v.push_back(5);
    //   cout<<v.size()<<" ";   
 // 1 2 3 4 5 6

    // v[5] = 76;
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";
    // cout<<v[5]<<" ";

    v.push_back(9);
    cout<<v.capacity()<<" ";             // push back means creating size and value insertion
    v.push_back(7); // again pb means doubling capacity then assign values
      cout<<v.capacity()<<" ";   
    v.push_back(945);
      cout<<v.capacity()<<" ";   
    v.push_back(3);
      cout<<v.capacity()<<" ";   
    v.push_back(6);
      cout<<v.capacity()<<" ";   
    v.push_back(5);
      cout<<v.capacity()<<" ";
 // 1 2 2 4 8 8
return 0;
}