#include <iostream>
#include <string>
#include <vector>

using namespace std ;

int main() {
    vector<int> nums = {1 , 5,4 ,3 ,2};
    int n = nums.size();
    int i = 0;
    while(i<n)
{
    int correctidx = nums[i] - 1;

    if(i == correctidx ) i++;
    else swap(nums[i] , nums[correctidx]);
}   // cycle sort 
    // T C = O(n)

for(int i = 0 ; i<n;i++){
    cout<<nums[i]<<" ";
}
 return 0;
}