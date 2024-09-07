#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std ;

class Solution {
public:
    bool isperfect(int n) {
        int root = sqrt(n);
        if(root*root ==n) return true ;
        else return false ;
    }
    bool judgeSquareSum(int c) {
        int x = 0;
        int y = c;
        while(x<=y) {
            if(isperfect(x) && isperfect(y)) return true ;
            else if(!isperfect(y)) {
                y = (int)sqrt(y)*(int)sqrt(y) ;
                x = c - y;

            }
            else {
                x = ((int)sqrt(x) + 1)*((int)sqrt(x) + 1) ;
                y = c - x ;
            }
        }
        return false ;
    }
};


int  main () 
{ // time complexity is root c /// (c^1/2)
    int c = 41 ;
    Solution sol ;
    cout<<sol.judgeSquareSum(c);
return 0;
}