#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int n = arr.size();
        int lo = 1;
        int hi = n - 2;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            {
                return arr[mid];
            }
            else if (arr[mid] > arr[mid + 1])
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return 1;
    }
};

int main()
{   
    vector<int> arr = {1, 3, 5, 4, 3, 2, 1, 0};
    Solution obj;
    cout << obj.peakIndexInMountainArray(arr);
    return 0;
}