#include <iostream>
using namespace std;

class Nodes
{
public:
    int val;
    Nodes *next;

    Nodes(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

class Queue
{
public:
    Nodes *head;
    Nodes *tail;
    int size;

    Queue()
    {
        head = tail = NULL;
        size = 0;
    }
    void push(int val)
    {
        Nodes *temp = new Nodes(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void pop()
    {
        if (size == 0)
        {
            cout << "queue is empty !" << endl;
            return;
        }
        Nodes* temp = head;
        head = head->next;
        size--;
        delete(temp); // watage nahi hoga abb
    }
    int front()
    {
        if (size == 0)
        {
            cout << "queue is empty !" << endl;
            return -1;
        }
        return head->val;
    }
    int back()
    {
        if (size == 0)
        {
            cout << "queue is empty !" << endl;
            return -1;
        }
        return tail->val;
    }

    void display()
    {
        Nodes *t = head;
        while (t != NULL)
        {
            cout << t->val << " ";
            t = t->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(70);

    
    q.display();
    cout << q.front() << endl;
    q.pop();
    cout << q.size << endl;
    q.display();
    return 0;
}