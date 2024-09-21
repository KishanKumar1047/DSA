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

// void reverseKfirst(queue<int> &q, int k)
// {
//     Reverse(q, k);
//     int n = q.size();
//     for (int i = 0; i < n - k; i++)
//     {
//         int x = q.front();
//         q.pop();
//         // cout << x <<" ";
//         q.push(x);
//     }
//     cout << endl;
// }
void Reversefirstk(queue<int> &q, int k)
{
    int n = q.size();
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        int x = q.front();
        q.pop();
        st.push(x); // put x  in stack
    }
    for (int i = 0; i < k; i++)
    {
        int x = st.top();
        st.pop();
        q.push(x); // put x  back in queue
    }

    for (int i = 0; i < n - k; i++)
    {
        int x = q.front();
        q.pop();
        // cout << x <<" ";
        q.push(x);
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    // push , front/top,pop , back , size
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    Reversefirstk(q, 3);
    display(q);

    return 0;
}