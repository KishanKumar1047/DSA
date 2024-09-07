#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subset(string ans, string original, int idx)
{
    if (idx == original.length())
    {
        cout << ans<<endl;
        return;
    }
    char ch = original[idx];
   
        subset(ans, original, idx + 1);
        subset(ans + ch, original, idx + 1);
}

void subset2(string ans, string original , vector <string> &v)
{
    if (original.length()==0)
    {
        v.push_back(ans);
        return;
    }
    char ch = original[0];
   
        subset2(ans, original.substr(1) , v);
        subset2(ans + ch, original.substr(1) , v);
}

int main()
{
    string s = "abc";
    vector<string> v;
    subset2("", s ,v);

    for(string ele : v) {
        cout<<ele<<endl;
    }

    return 0;
}