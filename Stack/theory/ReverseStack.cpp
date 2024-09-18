// reverse using two extra stacks
#include <iostream>
#include <stack>
using namespace std ;

int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(60);
    stack<int>t1;
    stack<int>t2;
    while(st.size()>0){ // putting val in t1
        t1.push(st.top());
        st.pop();
    }
    while(t1.size()>0){ // putting ele in t2
        t2.push(t1.top());
        t1.pop();
    }
    while(t2.size()>0){ // putting back in original stack 
        st.push(t2.top());
        t2.pop();
    }
    cout<<st.top()<<endl;

    return 0;
}
