#include <iostream>
#include <string>

using namespace std;

int pow(int n, int m)
{

    if (m == 0)
        return 1;
    else
        return n * pow(n, m - 1);
}

int main()
{ // t.c = o(n) so we will use logarithmic slotuion with t.c = o(log(n))
    int n, m;
    cin >> n;
    cin >> m;
    cout << pow(n, m);
    return 0;
}

