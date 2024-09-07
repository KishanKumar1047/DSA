#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution
{
public:
    string decimal_to_binary(int &num, string &result)
    {
        while (num > 0)
        {
            if (num % 2 == 0)
            {
                result = "0" + result;
            }
            else
            {
                result = "1" + result;
            }
            num = num / 2;
        }
        return result;
    }
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;

        string result = "";
        //     long long y = log2(n);
        //     if(pow(2,y)==n) return true;
        //     else return false;
        //    return true;
        decimal_to_binary(n, result);
        int count = 0;
        for (int i = 0; i < result.size(); i++)
        {
            if (result[i] == '1')
                count++;
            if (count >= 2)
                return false;
        }
        if (count >= 2)
            return false;
        else
            return true;
        return true;
    }
};

int main()
{
    Solution obj;
    cout<<obj.isPowerOfTwo(3);
    return 0;
}