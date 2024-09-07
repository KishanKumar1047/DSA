// sorting for o's and 1's element .

#include <iostream>
#include <vector>

using namespace std;

void sort1(vector<int> &v)
{
    int n = v.size();
    int n2 = 0;
    int n1 = 0;
    int n0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            n0++;
        }
        else if (v[i] == 1)
        {
            n1++;
        }
        else
        {
            n2++;
        }
    }
    cout << endl;
    // fill the element
    for (int i = 0; i < n; i++)
    {
        if (i < n0)
        {
            v[i] = 0;
        }
        else if (i < (n1 + n0))
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 2;
        }
    }
}
// method 2 or dutch algorithm
void sort2(vector<int>& v)
{
    int j = v.size() - 1;
    int i = 0;
    int k = 0;
    while (k <=j)
    {
        if (v[k] == 2)
        {
            // swapping
            int temp = v[k];
            v[k] = v[j];
            v[j] = temp;
            j--;
        }

        else if (v[k] == 0)
        {
            // swapping
            int temp = v[k];
            v[k] = v[i];
            v[i] = temp;
            i++;
            k++;
        }
        else
        {
            k++;
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
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
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