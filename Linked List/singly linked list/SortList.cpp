#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // Function to merge two sorted linked lists
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* c = new ListNode(100);  // Dummy node to start the merged list
        ListNode* tempC = c;

        // Merge the two lists by comparing their node values
        while (a != NULL && b != NULL) {
            if (a->val <= b->val) {
                tempC->next = a;
                a = a->next;
            } else {
                tempC->next = b;
                b = b->next;
            }
            tempC = tempC->next;
        }

        // Attach the remaining nodes from either list
        if (a == NULL) {
            tempC->next = b;
        } else {
            tempC->next = a;
        }

        return c->next;  // Return the merged list, skipping the dummy node
    }

    // Function to sort a linked list using merge sort
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;  // Base case for recursion

        // Split the list into two halves using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split the list into two halves: a and b
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = nullptr;  // Break the link between the two halves

        // Recursively sort both halves
        a = sortList(a);
        b = sortList(b);

        // Merge the two sorted halves and return the result
        return merge(a, b);
    }
};

// Utility function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Utility function to create a linked list from an array of values
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

int main() {
    // Test case: unsorted linked list
    int arr[] = {4, 2, 1, 3};
    ListNode* head = createList(arr, 4);

    // Print the original list
    cout << "Original List: ";
    printList(head);

    // Create a solution object and sort the list
    Solution solution;
    ListNode* sortedList = solution.sortList(head);

    // Print the sorted list
    cout << "Sorted List: ";
    printList(sortedList);

    return 0;
}

// class Solution {
// public:
// ListNode* merge(ListNode* a, ListNode* b) {
//         ListNode* c = new ListNode(100);
//         ListNode* tempC = c;
//         while(a != NULL && b != NULL){
//             if(a->val<=b->val){
//                 tempC->next = a;
//                 a = a->next;
//                 tempC = tempC->next;
//             }
//             else {
//                  tempC->next = b;
//                 b = b->next;
//                 tempC = tempC->next;

//             }
//         }
//         if(a==NULL){
//             tempC->next = b;
//         }
//         else {
//             tempC->next = a;
//         }
//         return c->next;        
//     }
//     ListNode* sortList(ListNode* head) {
//         if(head == NULL || head->next == NULL) return head;
//          ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast->next != nullptr && fast->next->next != nullptr){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode* a = head ;
//         ListNode* b = slow->next ;
//         slow->next = nullptr;
//         a = sortList(a);
//         b = sortList(b);
//         ListNode* c = merge(a,b);
//         return c;


        
        
//     }
// };