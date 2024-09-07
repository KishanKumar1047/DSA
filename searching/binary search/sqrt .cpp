// for x = 30 , sqrt = int value= 5 
#include<iostream>
#include<string>
#include<vector>
using namespace std ;


class Solution {
public:
    int mySqrt(int x) {
        int lo = 0 ;
        int hg = x ;
        while(lo<=hg) {
            int mid = lo + (hg - lo)/2 ;
            long long m = (long long) mid;
            long long y =  (long long) x;

            if(m*m == y) return m ;
            else if (m*m>y) hg = m - 1;
            else lo = m + 1 ;
        }
        return hg ;
    }
};

int  main () 
{   int x = 20 ;
    Solution st ;
    cout<<st.mySqrt(x);
return 0;
}