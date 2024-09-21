// 15263748
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
        cout << x << " ";
        q.push(x);
    }
    cout << endl;
}


void Reversefirstk(queue<int> &q)
{
    int n = q.size();
    stack<int> st;
    for (int i = 0; i < n/2; i++)
    {
        int x = q.front();
        q.pop();
        st.push(x); // put x  in stack
    }
    for (int i = 0; i < n/2; i++)
    {
        int x = st.top();
        st.pop();
        q.push(x); // put x  back in queue
    }
     for (int i = 0; i < n/2; i++)
    {
        int x = q.front();
        q.pop();
        st.push(x); // put x  in stack
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    while(q.size()>0){
        st.push(q.front());
        q.pop();

    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

   
    cout << endl;
}
int main()
{
    queue<int> q;
    // push , front/top,pop , back , size
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    Reversefirstk(q);
    display(q);



    return 0;
}