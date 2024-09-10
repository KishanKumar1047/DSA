#include <iostream>
using namespace std;

class Solution {
    int s_private = 234;
    public:
    friend void show(Solution &a); // have access of private fxn too
};

void show(Solution &a){
    cout<<a.s_private;
}

int main() {
    Solution a;
    show(a);
  
    return 0;
}