// best one
#include <iostream>
using namespace std;
// class Solution {
// public:
//     long long combination(long long n, long long r) {
//         long long res = 1;
//         if (r > n - r) {
//             r = n - r; // nCr is the same as nC(n-r)
//         }
//         for (long long i = 0; i < r; ++i) {
//             res *= (n - i);
//             res /= (i + 1);
//         }
//         return res;
//     }

//     vector<int> getRow(int rowIndex) {
//         long long n = rowIndex;
//         vector<int> v(n + 1);
//         for (int j = 0; j <= n; j++) {
//             v[j] = combination(n, j);
//         }
//         return v;
//     }
// };


int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}

int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i,j)<<" ";
        }
        cout << endl;
    }
    
    return 0;
}