#include <iostream>
#include <vector>

using namespace std; 

int main () {
    vector<int> v;
    v.push_back(0);
    v.push_back(8);
    v.push_back(4);
    v.push_back(2);
    v.push_back(12);
    v.push_back(90);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(94);
    v.push_back(3);


    for(int i = 0 ; i< v.size() ; i++) {
        
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    for (int i = 0 ; i< v.size() - 1 ; i++) {
         for (int j =  i + 1 ; j< v.size() ; j++) {
            if (v[i] + v[j] == 8) {
                cout<< "("<< i<<","<<j<<")" <<endl ;

            }
         }
    }
    return 0;
}