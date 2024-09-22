#include <iostream>
#include <string>
#include <queue>

using namespace std ;

int main() {
    queue<int> q;
    // push , front/top,pop , back , size
    q.push(12);
    q.push(23);
    q.push(51);
    q.push(21);
    q.push(42);
    q.push(4);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    // cout<<q.size()<<endl;

    return 0;
}