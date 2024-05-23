/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    int length = 0;
    ListNode* temp = A;
    while (temp != NULL) {
        temp = temp->next;
        length++;
    }
    
    int mid = (length / 2) - B;
    
    if (mid == 0) {
        return A->val;
    }
    else if (mid > 0) {
        ListNode* temp = A;
        while (mid--) {
            temp = temp->next;
        }
        return temp->val;
    }
    return -1;
}
