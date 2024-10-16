#include <iostream>
#include <unordered_map>

using namespace std ;

int main() {
    unordered_map<string ,int> m;
    pair<string ,int>p1;
    p1.first = "kishan";
    p1.second = 13;

    pair<string ,int>p2;
    p2.first = "Rajan";
    p2.second = 18;

    pair<string ,int>p3;
    p3.first = "Raghav";
    p3.second = 19;

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    // another way of insertion , efficient
    m["Arjun"] =  167;


    // for( pair<string ,int>p : m){
    //     cout<<p.first<<" "<<p.second;
    // }

    for( auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    m.erase("Raghav");

     for( auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m.size()<<endl;
    cout<<m["kishan"]<<endl;

    return 0;
}