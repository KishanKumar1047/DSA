#include <iostream>
#include <vector>
using namespace std;

class Stack
{
public:
    vector<int> v; //no overflow

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (v.size() == 0)
        {
            cout << "stack is empty" << endl;
            return ;
        }
        v.pop_back();
    }
    int top()
    {
         if (v.size() == 0)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size()
    {
        v.size();
    }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(90);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;

    return 0;
}