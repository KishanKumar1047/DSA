#include <iostream>
#include <stack>
using namespace std ;

int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    // st.pop();
    cout<<st.top()<<endl;
    // tpprint whole stach without empyting it , in reverse order
    stack<int>temp;
    while(st.size()>0){
        // cout<<st.top()<<" "; // in reverse order
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;

    while(temp.size()>0){
        cout<<temp.top()<<" "; // in sequences
        st.push(temp.top());
        temp.pop();
    }
    return 0;
}