#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end()) ;
        sort(s.begin(),s.end()) ;
        int count = 0;
        int i = 0;
        int j = 0;
        while(i<g.size() && j<s.size())

        {
            if (s[j]>=g[i]) {
                count++;
                i++ ;
                j++ ;

            }
            else j++;
        }
        return count ;
    }
int  main () 
{
    vector<int> g = {1 , 2, 3};
    vector<int> s = {1 , 1};
    cout<<findContentChildren(g , s) ;

return 0;
}