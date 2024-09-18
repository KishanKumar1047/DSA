// leetcode 155

#include <stack>
#include <climits>  // For LLONG_MAX

class MinStack {
public:
    std::stack<long long> st;
    long long min;

    MinStack() {
        min = LLONG_MAX; // Initialize min to the largest possible long long value
    }

    void push(int val) {
        long long x = (long long) val;
        if (st.empty()) {
            st.push(x);     // Push the value directly
            min = x;        // Set min to the first value
        } else if (x >= min) {
            st.push(x);     // Normal push if x is greater than or equal to the current min
        } else {
            st.push(2 * x - min);  // Push a modified value to encode the previous min
            min = x;               // Update the current min
        }
    }

    void pop() {
        if (st.top() < min) {
            // If the top value is the encoded value, we need to restore the previous min
            min = 2 * min - st.top();
        }
        st.pop();
    }

    int top() {
        if (st.top() < min) {
            // If the top value is an encoded value, return the current min
            return (int)min;
        } else {
            // Otherwise, return the actual value at the top
            return (int)st.top();
        }
    }

    int getMin() {
        // Return the current minimum value
        return (int)min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
