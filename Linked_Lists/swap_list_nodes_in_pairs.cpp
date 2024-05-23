/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* temp=A;
    while (temp != NULL && temp->next != NULL) {
        swap(temp->val, temp->next->val);
        temp = temp->next->next;
    }
    return A;
}
