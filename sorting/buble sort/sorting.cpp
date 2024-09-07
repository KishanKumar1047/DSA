#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // nlogn is time complexity
    reverse(v.begin(), v.end());
    for (int i = 0; i < 5; i++)
    {
        cout << v[i]<< " ";
    }

    return 0;
}