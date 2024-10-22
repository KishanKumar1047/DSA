#include <iostream>
#include <queue>
#include <vector>

using namespace std ;

int main() {

    vector<int> arr = {1,-2,-3,4,6};
     priority_queue<int , vector<int> , greater<int> > pq; 
     for(auto ele : arr){
        pq.push(ele);

     }
     int x ;
     int pd = 1;
     int y  = 0;
    if(pq.top()<0){
         while(pq.top()<0){
        x = pq.top();
        pq.pop();
        y = pd;
        pd *= x;
        if(pd>0) {
            pd = y;
            break;
        }
     }
    }
  else {
    pd = pq.top();
  }
cout<<pd;

    return 0;
}