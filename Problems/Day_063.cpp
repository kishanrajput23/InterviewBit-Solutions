/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
    
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* dummy=new ListNode(0);
    dummy = A;

    ListNode* fast = dummy;
    ListNode* slow = dummy;

    while (B && fast->next != NULL) {
        fast = fast->next;
        B--;
    }

    if (B > 0) {
        return A->next;
    }

    while (fast->next) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;

    return A;
}
