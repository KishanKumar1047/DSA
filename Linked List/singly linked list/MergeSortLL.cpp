#include <iostream>
using namespace std;

class Node
{ // user-defined datatype
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }

    // Merges two sorted linked lists
    Node *merge(Node *left, Node *right)
    {
        if (left == NULL)
            return right;
        else if (right == NULL)
            return left;

        Node *result = nullptr;

        if (left->val < right->val)
        {
            result = left;
            result->next = merge(left->next, right);  // Fix: link the next pointer
        }
        else
        {
            result = right;
            result->next = merge(left, right->next);  // Fix: link the next pointer
        }

        return result;
    }

    // Finds the middle of the linked list
    Node *findMiddle(Node *head)
    {
        if (head == nullptr)
            return head;
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Merge sort for linked list
    Node *mergeSort(Node *node)
    {
        if (node == nullptr || node->next == nullptr)
        {
            return node;
        }
        Node *middle = findMiddle(node);
        Node *nextOfMiddle = middle->next;
        middle->next = NULL;

        Node *left = mergeSort(node);
        Node *right = mergeSort(nextOfMiddle);

        return merge(left, right);
    }

    // Calls merge sort on the linked list
    void sort()
    {
        head = mergeSort(head);
    }

    // Inserts a node at the end of the linked list
    void InsertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    // Inserts a node at the beginning of the linked list
    void InsertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    // Deletes the head node
    void DeleteAtHead()
    {
        if (size == 0)
        {
            cout << "List is Empty" << endl;
        }
        else if (size == 1)
        {
            head = tail = NULL;
            size--;
        }
        else
        {
            head = head->next;
            size--;
        }
    }

    // Deletes the tail node
    void DeleteAtTail()
    {
        Node *temp = head;
        if (size == 0)
        {
            cout << "List is Empty" << endl;
        }
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    // Inserts a node at the given index
    void InsertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid position" << endl;
        }
        else if (idx == 0)
        {
            InsertAtHead(val);
        }
        else if (idx == size)
        {
            InsertAtTail(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    // Deletes the node at the given index
    void DeleteAtIdx(int idx)
    {
        if (size == 0)
        {
            cout << "List is Empty" << endl;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "Invalid Index" << endl;
        }
        else if (idx == 0)
        {
            DeleteAtHead();
        }
        else if (idx == size - 1)
        {
            DeleteAtTail();
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void Deleteitem(int item){
        if(head==NULL){
            cout<<"List is empty";
            return;
        }
        if(head->val == item){
            head = head->next;
            size--;
        }
        else {
            Node* temp = head;
            while(  temp->next != NULL &&  temp->next->val !=item  ){
                temp = temp->next;
            }
            if(temp->next == NULL){
                cout<<"item not found"<<endl;
            }
            else {
                temp->next = temp->next->next;
                size--;
            }
        }
    }

    // Gets the value of the node at the given index
    void getIdx(int idx)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid idx" << endl;
        }
        else if (idx == 0)
        {
            cout << head->val << endl;
        }
        else if (idx == size - 1)
        {
            cout << tail->val << endl;
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            cout << temp->val << endl;
        }
    }

    // Displays the linked list
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList ll;
    ll.InsertAtTail(10);   // {10}
    ll.InsertAtTail(20);   // {10,20}
    ll.InsertAtIdx(1, 90); // {10,90,20}
    ll.InsertAtHead(89);   // {89,10,90,20}
    ll.InsertAtHead(345);  // {345,89,10,90,20}
    ll.InsertAtIdx(3, 55); // {345,89,10,55,90,20}
    ll.display();
    ll.Deleteitem(55);
    ll.display();
    ll.Deleteitem(98);
    ll.display();
    ll.Deleteitem(20);
    ll.display();

    return 0;
}
