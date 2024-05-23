/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if (A == NULL || A->next == NULL) {
        return A;
    }

    ListNode* dummy = new ListNode(-1);
    dummy->next = A;

    // making note for current node and previous node before reversing
    ListNode* leftPre = dummy;
    ListNode* curr = A;

    for (int i=0; i<B-1; i++) {
        leftPre = leftPre->next;
        curr = curr->next;
    }

    // making note for where we need to start reversing
    ListNode* subListHead = curr;

    ListNode* prev = NULL;
    ListNode* nextNode = NULL;

    for (int i=0; i<C-B+1; i++) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    // joining the nodes
    leftPre->next = prev;
    subListHead->next = curr;
        
    return dummy->next;
}
