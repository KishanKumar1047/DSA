#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
    // Create a dummy node to start the merged list
    ListNode* c = new ListNode(100);
    ListNode* tempC = c;

    // Traverse both lists and merge them based on value comparison
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

    // If one list ends, link the remaining part of the other list
    if (a == NULL) {
        tempC->next = b;
    } else {
        tempC->next = a;
    }

    // Return the merged list, skipping the dummy node
    return c->next;
}

// Utility function to print a linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Utility function to create a linked list from an array of values
ListNode* createList(int arr[], int n) {
    if (n == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

int main() {
    // Create two sorted lists for testing
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    ListNode* list1 = createList(arr1, 3);
    ListNode* list2 = createList(arr2, 3);

    // Print the input lists
    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    // Merge the two lists
    ListNode* mergedList = mergeTwoLists(list1, list2);

    // Print the merged list
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
