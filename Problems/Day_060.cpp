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
    
    ListNode* curr = A;
    
    while (curr != NULL) {
        if ((curr->next != NULL) && curr->val == curr->next->val) {
            ListNode* nextNode = curr->next->next;
            ListNode* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next = nextNode;
        }
        else {
            curr = curr->next;
        }
    }
    return A;
}
