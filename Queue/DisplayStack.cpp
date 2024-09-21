#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        q.pop();
        cout << x <<" ";
        q.push(x);
    }
    cout<<endl;
}
void Reverse(queue<int> &q)
{
    int n = q.size();
    stack<int>st;
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        q.pop();
        st.push(x);// put x  in stack
    }
    for (int i = 0; i < n; i++)
    {
        int x = st.top();
        st.pop();
        q.push(x);// put x  back in queue
    }


}

int main()
{
    queue<int> q; // by value
    // push , front/top,pop , back , size
    q.push(12);
    q.push(23);
    q.push(51);
    q.push(21);
    q.push(42);
    q.push(4);
    // to displasy queue
    display(q);// normal display
    Reverse(q);// reversing the queue , using stack
    display(q);

    return 0;
}