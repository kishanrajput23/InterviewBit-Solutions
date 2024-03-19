/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if (A == NULL || A->next == NULL || B == 0) {
        return A;
    }
    
    int length = 1;
    ListNode* temp = A;
    
    while (temp->next != NULL) {
        length++;
        temp = temp->next;
    }
    
    temp->next = A;
    B = B % length;
    
    temp = A;
    for (int i=1; i<length-B; i++) {
        temp = temp->next;
    }
    
    A = temp->next;
    temp->next = NULL;
    
    return A;
}
