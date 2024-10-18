#include <iostream>
#include <queue>
#include <vector>

using namespace std ;

int main() {
    vector<int>ans;
    priority_queue<int , vector<int> , greater<int> > pq; // minHeap , it is something like stack only
     int arr[] = {10,9,8,7,4,70,60,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k) {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
            pq.pop();
    }
   for(int i = 0 ;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }


    return 0;
}