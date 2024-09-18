// push at given index
#include <iostream>
#include <stack>
using namespace std;
// pass by value
void PushAtBottom(stack<int> &st, int val)
{
    stack<int> t1;
    while (st.size() > 0)
    { // putting val in t1
        t1.push(st.top());
        st.pop();
    }
    st.push(val);
    while (t1.size() > 0)
    { // putting val in t1
        st.push(t1.top());
        t1.pop();
    }
}
void PushAtIdx(stack<int> &st, int idx, int val)
{
    stack<int> t1;
    while (st.size() > idx)
    {
        t1.push(st.top());
        st.pop();
    }
    st.push(val);
    while (t1.size() > 0)
    {
        st.push(t1.top());
        t1.pop();
    }
}

void print(stack<int> &st)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        cout << temp.top() << " "; // in sequences
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(60);
    print(st);
    PushAtBottom(st, 78);
    print(st); // 78 10 20 30 40 60
    PushAtIdx(st, 3, 56);
    print(st); // 78 10 20 56 30 40 60

    return 0;
}
