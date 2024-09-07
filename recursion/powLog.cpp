#include <iostream>
#include <string>

using namespace std;

int pow(int n, int m)
{
    if (m == 0) return 1;
    //if (m == 1) return n ;
    int ans = pow(n , m/2);
    if (m%2==0) {
        return ans*ans;
    }
    else {
        return ans*ans*n ;
    }
}

int main()
{ // t.c = o(n) so we will use logarithmic slotuion with t.c = o(log(n))
    int n, m;
    cin >> n;
    cin >> m;
    cout << pow(n, m);
    return 0;
}