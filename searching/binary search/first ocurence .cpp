#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int target = 4;

    vector<int> v = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 5, 9};
    int n = v.size();
    int i = 0;
    int j = n - 1;
    bool flag = false;
    while (i <= j)
    {

        int mid = i + (j - i) / 2;
        if (v[mid] == target)
        {
            if (v[mid - 1] != target)
            {
                flag = true;
                cout << mid;
                break;
            }
            else
            {
                j = mid - 1;
            }
        }
        else if (v[mid] > target)
            j = mid - 1;
        else
            i = mid + 1;
    }
    if (flag == false)
        cout << -1;

    return 0;
}