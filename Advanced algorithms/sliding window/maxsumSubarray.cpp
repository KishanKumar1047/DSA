#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
   // int maxsum = INT8_MIN;
    // int idx = -1;
    // for (int i = 0; i <= n - k; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < k + i; j++)
    //     {
    //         sum += arr[j];
    //     }
    //     if (maxsum < sum)
    //     {
    //         maxsum = sum;
    //          idx = i;
    //     }
       
    // }
    // cout<<maxsum<<endl;
    // cout<<idx<<endl;

    int masum = INT8_MIN;
    int maxidx =0; 
    int presum = 0;
    for(int i = 0; i<k ;i++){
        presum += arr[i];
    }
    masum = presum;
    int i = 1;
    int j = k;
    // sliding window
    // t.c o(n)
    while(j<n){
        int currsum = presum + arr[j] - arr[i-1];
        if(masum<currsum){
            masum =currsum;
            maxidx = i;

        }
        presum = currsum;
        i++;
        j++;

    }
    cout<<masum<<" "<<maxidx;

    

    return 0;
}