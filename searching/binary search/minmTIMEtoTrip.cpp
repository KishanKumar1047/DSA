#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    bool check(long long mid, vector<int> &time, int totalTrips)
    {
        long long trips = 0;
        for (int t : time)
        {
            trips += mid / t;
        }
        return trips >= totalTrips;
    }

    long long minimumTime(vector<int> &time, int totalTrips)
    {
        int n = time.size();
        long long lo = 1;
        long long hi = (long long)*max_element(time.begin(), time.end()) * totalTrips;
        long long ans = -1;

        while (lo <= hi)
        {
            long long mid = lo + (hi - lo) / 2;
            if (check(mid, time, totalTrips))
            {
                ans = mid;
                hi = mid - 1; // Look for a smaller valid time
            }
            else
            {
                lo = mid + 1; // Increase the time range to find a valid time
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> time = {1, 2, 3};
    int totalTrips = 5;
    Solution obj;
    cout << obj.minimumTime(time, totalTrips);
    return 0;
}