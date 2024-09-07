// // stair path if 1 & 2 jump is allowed
// #include<iostream>
// #include<string>

// //  Euler tree diagram
// // t.c = (2^n)
// using namespace std ;

// int stairPath(int n) {
//     if ( n == 1) return 1;
//     if ( n == 2) return 2;

//     else return stairPath(n-1) + stairPath(n-2);
// }

// space optimizing one
// int climbStairs(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     int prev = 1, curr = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         int temp = curr;
//         curr = prev + curr;
//         prev = temp;
//     }
//     return curr;
// }

// int  main ()
// {
//     int n ;
//     cin>>n;
//     cout<<stairPath(n);
// return 0;
// }

// stair path if 1 & 2 & 3 jump is allowed
#include <iostream>
#include <string>

//  Euler tree diagram
// t.c = (2^n)
using namespace std;

int stairPath(int n)
{
    if (n < 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    else
        return stairPath(n - 1) + stairPath(n - 2) + stairPath(n - 3);
}

int main()
{
    int n;
    cin >> n;
    cout << stairPath(n);
    return 0;
}