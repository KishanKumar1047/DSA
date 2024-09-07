#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> c;
    v.push_back(0);
    v.push_back(8);
    v.push_back(4);
    v.push_back(2);
    v.push_back(12);
    v.push_back(90);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(94);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {

        cout << v.at(i) << " ";
    }
    cout << endl;
  
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int x;
        x = v[i];
        c.push_back(x);
    }
    cout << endl;

    for (int i = 0; i < c.size(); i++)
    {

        cout << c.at(i) << " ";
    }

    return 0;
}
