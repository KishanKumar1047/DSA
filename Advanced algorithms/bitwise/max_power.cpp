// maximum power of 2 which is smaller than n ; eg 24(n) , ans = 16
#include <iostream>
#include <string>
#include <vector>

using namespace std ;

int main() {
    // Your code here
    int x = 90;
    int temp;
    while(x != 0) {
        temp = x;
        x = x & (x-1);
    }
    cout<<temp;
    return 0;
} 