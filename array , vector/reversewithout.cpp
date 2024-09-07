// reverse array without another array
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(8);
    v.push_back(4);
    v.push_back(2);
    v.push_back(12);
    v.push_back(90);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {

        cout << v.at(i) << " ";
    }
    cout << endl;

    int i = 0;
    int j = v.size() - 1;
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++ ;
        j-- ;
    }

    for (int i = 0; i < v.size(); i++)
    {

        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}