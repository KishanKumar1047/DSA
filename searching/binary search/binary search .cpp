#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int target = 18;

    vector<int> v = {1, 2, 4, 6, 7,8 , 10 , 12 , 15 , 18}; // for binary search , it must be sorted
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        // int mid = (i + j) / 2;
          int mid =  i +  (j - i) / 2;
        if (v[mid] == target)
        {
            cout << mid;
            break;
        }
        else if (v[mid] > target)
            j = mid - 1;
        else
            i = mid + 1;
    }

    return 0;
}