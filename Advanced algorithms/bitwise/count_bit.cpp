#include <iostream>
#include <algorithm>
#include <climits>

using namespace std ;
int count_bits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = (n & (n-1));
    }
    return count;
}

int main() {
    // int m = _builtin_popcount(7);
    // cout<<m;
    cout<<count_bits(23);
    return 0;
}