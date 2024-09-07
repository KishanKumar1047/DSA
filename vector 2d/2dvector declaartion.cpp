#include <iostream>
#include <vector>
using namespace std;

int main () {

//     vector<int> v (5, 4) ; // vector with size 3 and each elements = 3.
vector<vector<int>> v(3 , vector<int> (4 , 2)) ; // vector with row = 3 , column =  4 and each element 2
 for(int i = 0 ; i<3 ; i++) {
    for(int j = 0 ; j<4 ; j++) {
        cout<<v[i][j]<<" " ; ;
    }
    cout<<endl;
 }
cout<<v.size()<<endl ;
cout<<v[0].size()<<endl; // row 0 ka size
cout<<v[1].size(); // row 1 ka size
    return 0;
}