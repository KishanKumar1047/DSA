#include <iostream>
#include <stack>
using namespace std ;

// priority function
int prio(char ch){
    if(ch=='+' || ch == '-') return 1;
    else return 2;
}

int solve(int val2 , int val1 , char ch){
    if (ch=='+') return val1 + val2;
    else if (ch=='-') return val1 - val2;
    else if (ch=='*') return val1 * val2;
    else  return val1 / val2;
}

int main() {
    string s = "2+6*4/8-3";
    // need of two extra stack
    stack<int>val;
    stack<char>op;
    for(int i = 0; i<s.size();i++){
        // need to check if s[i] is digit
        // int ascii = int(s[i]);
        // if(ascii>=48 && ascii<= 57) // 0-9
        if(s[i]>=48 && s[i]<= 57) { // typecasting to integer
            val.push(s[i]-48) ;
        }
        else {
            if(op.size()==0 || prio(op.top())<prio(s[i])){
                op.push(s[i]);
            }
            else { // prio(op.top()) > prio(s[i])
                while(op.size()>0 && prio(op.top()) >= prio(s[i])){
                    // to do operation
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val2,val1,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    
    }
    // it may be stack is not emoty
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val2,val1,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    return 0;
}