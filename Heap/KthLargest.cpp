#include <iostream>
#include <queue>
#include <vector>

using namespace std ;

int main() {
    int arr[] = {10,200,-4,6,18,7,105,118};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    int k = 3;
    priority_queue<int , vector<int> , greater<int> > pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl; // t.c = o(nlogk) , s.c = o(k)auxilary


    return 0;
}