#include <iostream>
#include <queue>
#include <vector>

using namespace std ;

int main() {
    priority_queue<int , vector<int> , greater<int> > pq; // minHeap , it is something like stack only
    pq.push(15);
    pq.push(1);
    pq.push(19);
    pq.push(23);
    cout<<pq.top()<<endl; // minimum number
    pq.pop();


    return 0;
}