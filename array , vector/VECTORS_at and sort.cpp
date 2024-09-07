#include <iostream>
#include <vector>
#include <algorithm> // Include this header for std::sort

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(9);
    v.push_back(8);
    v.push_back(4);
    v.push_back(2);
    v.push_back(12);
    v.push_back(90);

    v.at(3) = 76;
    // cout << v.at(3) << endl;
    // cout << v.at(4) << endl;
    // cout << v.at(5) << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}
