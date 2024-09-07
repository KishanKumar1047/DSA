// sorting for o's and 1's element .

#include <iostream>
#include <vector>

using namespace std;

void sort1(vector<int>& v)
{ 
    int n = v.size() ;
    int n1 = 0;
    int n0 = 0;

    for (int i = 0; i < n ; i++)
    {
        if (v[i] == 0)
        {
            n0 ++;
        }
        else
        {
            n1++;
        }
    }
    cout << endl;
    // fill the element
    for (int i = 0; i < n ; i++)
    {
        if (i < n0)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
}

void sort2(vector<int>& v) {
    int j = v.size( ) - 1;
    int i = 0;
    while(i<j) {
        if(v[i] == 0) i++ ;
        if(v[j]== 1) j--;
        if(i>j) break;
        if(v[i] == 1 & v[j] == 0) {
            v[i] = 0;
            v[j] = 1;
            i++ ;
            j--;
        }
    }
}

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int n = v.size();
    for (int i = 0; i < n; i++)
    {

        cout << v.at(i) << " ";
    }
    cout << endl;
    sort2(v);

    for (int i = 0; i < n; i++)
    {

        cout << v.at(i) << " ";
    }

    return 0;
}