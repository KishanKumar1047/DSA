#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Node
{ // user defined datatype
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Stack
{ // user defined data structure
public:
    int size;
    Node *head;
    Stack()
    {
        size = 0;
        head = NULL;
    }
    void Push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "stack is empty" << endl;
            return;
        }
        head = head->next;
        size--;
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        return head->val;
    }
    void print(Node *temp)
    {
        if (temp == NULL)
            return;
        print(temp->next);
        cout << temp->val << " ";
    }
    void display()
    {
        Node *temp = head;
        print(temp);

        cout << endl;
    }
};

int main()
{
    Stack st;
    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(90);
    st.Push(30);
    st.Push(40);
    st.Push(50);
    st.pop();
    cout << st.top() << endl;
    cout << st.size << endl;

    return 0;
}