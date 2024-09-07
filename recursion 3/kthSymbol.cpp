#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0) {
            int ans = kthGrammar( n-1,  k/2) ;
            if(ans==0) return 1;
            else return 0;
        }
        else {
            int ans = kthGrammar( n - 1,  k/2 + 1);
            return ans;
        }
    }
};

int main () {
    int n = 3;
    int k = 2;
    
    Solution obj ;
    cout<<obj.kthGrammar(n , k);

    return 0;
}