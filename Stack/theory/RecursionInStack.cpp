#include <iostream>
#include <stack>
using namespace std;

void displayRec(stack<int> &st)
{ // display recursively
    if (st.size() == 0)
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    displayRec(st);
    st.push(x);
}
void PushAtBottom(stack<int> &st , int val)
{ 
    if (st.size() == 0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    PushAtBottom(st,val);
    st.push(x);
}

void displayNor(stack<int> &st)
{ // display normally
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    displayNor(st);
    cout << x << " ";
    st.push(x);
}
void reverse(stack<int> &st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverse(st);
     PushAtBottom(st,x);

}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(60);
    displayNor(st);
    cout<<endl;
   // displayNor(st);
    //PushAtBottom(st,67);
    reverse(st);
    displayNor(st);

    return 0;
}