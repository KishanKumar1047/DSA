#include <iostream>
#include <map>
#include <set>

using namespace std ;

int main() {
    // set<int> s;

    // s.insert(2);
    // s.insert(3);
    // s.insert(5);
    // s.insert(9);
    // s.insert(4);
    // s.insert(20);
    // s.insert(21);
    // s.insert(7);
    // s.insert(29);
    // s.insert(2);// if elements are repeated counted single time 
    // cout<<s.size()<<endl;
    // // to display
    // for(int ele : s){ // random display
    //     cout<<ele<<" ";
    //  }
    // cout<<endl;
    // // to erase
    // s.erase(2);
    //  for(int ele : s){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    // // to find if a target exist or not
    // int target = 4;
    // if(s.find(target)!=s.end()){
    //     cout<<"exists!"<<endl;
    // }
    // else {
    //     cout<<"Not exists"<<endl;
    // }

    map<int ,int>m;
    m[1] =16;
    m[3] = 10;
    m[2]= 12;
    cout<<m.size()<<endl;
    // to display
    for(auto ele : m){ // random display
        cout<<ele.first<<" "<<ele.second<<endl;;
     }
   

    return 0;
}