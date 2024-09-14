#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo = new ListNode(0);
        ListNode* hi = new ListNode(0);
        ListNode* templo = lo;
        ListNode* temphi = hi;
        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->val<x){
                 templo->next = temp;
                temp = temp->next;
                templo = templo->next;
            } else {
                
                 temphi->next = temp;
                temp = temp->next;
                temphi = temphi->next;
            }
        }
        templo->next = hi->next;
        temphi->next = NULL;
        return lo->next;
    }
};

int main() {
    // Create two sorted lists for testing
   
}
