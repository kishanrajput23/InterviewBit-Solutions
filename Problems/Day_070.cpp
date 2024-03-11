/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if (A == NULL || A->next == NULL) {
        return A;
    }
    
    ListNode* dummy = new ListNode(-1);
    dummy->next = A;
    
    ListNode* curr = A;
    ListNode* prev = dummy;
    
    while (curr != NULL) {
        if (curr->next != NULL && (curr->val == curr->next->val)) {
            while (curr->next != NULL && (curr->val == curr->next->val)) {
                curr = curr->next;
            }
            prev->next = curr->next;
        }
        else {
            prev = prev->next;
        }
        
        curr = curr->next;
    }
    
    return dummy->next;
}
