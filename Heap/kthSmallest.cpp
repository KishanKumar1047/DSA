#include <iostream>
#include <queue>
#include <vector>

using namespace std ;

int main() {
    int arr[] = {3,2,-3,1,25,4,5,45,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    int k = 3;
    priority_queue<int> pq; // maxHeap , it is something like stack only
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl; // t.c = o(nlogk) , s.c = o(k)auxilary


    return 0;
}