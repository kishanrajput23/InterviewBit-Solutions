/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    int zeroCount = 0;
    int oneCount = 0;
    ListNode* temp = A;
    
    while (temp != NULL) {
        if (temp->val == 0) {
            zeroCount++;
        }
        else {
            oneCount++;
        }
        temp = temp->next;
    }
    
    temp = A;
    while (temp != NULL) {
        if (zeroCount != 0) {
            temp->val = 0;
            zeroCount--;
        }
        else if (oneCount != 0) {
            temp->val = 1;
            oneCount--;
        }
        
        temp = temp->next;
    }
    return A;
}
