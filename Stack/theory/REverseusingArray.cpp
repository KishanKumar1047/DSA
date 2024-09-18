// reverse using two array
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
    int arr[st.size()];
    int m = st.size();
    for(int i = 0; i<m;i++){ // putting value from satck to array
        arr[i] = st.top();
        st.pop();
    }
    // for(int i = 0; i<m;i++){
    //     cout<<arr[i]<<" ";
        
    // }
    for(int i = 0; i<m;i++){ // now putting value back in  stack in reverse order
       st.push(arr[i]);    
    }
    cout<<st.top()<<endl;

    return 0;
}
