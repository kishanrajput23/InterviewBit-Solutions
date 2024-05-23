/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B) {
    if (A == NULL || A->next == NULL || B <= 1) {
        return A;
    }
    
    ListNode* prev = NULL;
    ListNode* curr = A;
    ListNode* nextNode = NULL;
    int count = 0;
    
    // step 1 : reverse first B nodes
    while (curr != NULL && count < B) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
        count++;
    }
    
    // step 2 : now if head is not null then point it to Bth Node
    if (A != NULL) {
        A->next = curr;
    }
    
    // step 3 : now skipping B nodes
    count = 0;
    while (curr != NULL && count < B-1) {
        curr = curr->next;
        count++;
    }
    
    // step 4 : now recursively repeat both of the above steps
    if (curr != NULL) {
        curr->next = solve(curr->next, B);
    }
    
    // step 5 : after doing above setps now our head of new list is prev
    return prev;
}
