#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // v = { {1 , 2, 3} , {4 , 5 } , {6 , 7 , 8 ,9 , 10}} ;
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(3);
    v2.push_back(8);

    vector<int> v3;
    v3.push_back(6);
    v3.push_back(3);
    v3.push_back(5);
    v3.push_back(7);
    v3.push_back(9);
    v3.push_back(8);

    vector<vector<int>> v; // 2d vector  // v = { v1 , v2, v3} ;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // cout<<v[0][2]<<" ";
    // cout<<v[0][15] ; // invalid input

    cout<<v[0].size()<<endl; // column size

    cout<<v[1].size()<<endl;

    cout<<v[2].size()<<endl;

    return 0;
}