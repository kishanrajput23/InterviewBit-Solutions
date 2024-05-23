/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B) {
    ListNode* head = A;
    while (head != NULL)  {
        head->val -= ((head->val)%B);
        head = head->next;
    }        
    return A;
}
