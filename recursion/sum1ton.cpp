// #include <iostream>
// #include <string>

// using namespace std;

// void summ(int sum, int n)
// {
//     if (n == 0)
//         cout << sum << endl;
//     summ(sum + n, n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     summ(0, n);
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int fact(int n)
{
    if (n == 0) return 0;
    else 
    return n + fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
