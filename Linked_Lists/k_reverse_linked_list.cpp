/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode* temp = A;
    int len = 0;
    
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    
    // step 1 : base case
    if (len < B || len == 0) {
        return A;
    }
    
    // step 2 : reverse k groups elements;
    ListNode* prev = NULL;
    ListNode* curr = A;
    ListNode* nextNode = NULL;
    int count = 0;
    
    while (curr != NULL && count < B) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
        count++;
    }
    
    // step 3 : recursion
    A->next = reverseList(nextNode, B);
    
    // step 4 : return prev as head will be on that only
    return prev;
}
