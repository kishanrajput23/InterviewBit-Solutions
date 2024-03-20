/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

void insertAtTail(ListNode* &head, ListNode* &tail, int d) {
    ListNode* temp = new ListNode(d);
    if (head == NULL) {
        head = temp;
        tail = temp;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
}

ListNode* Solution::partition(ListNode* A, int B) {
    if (A == NULL || A->next == NULL) {
        return A;
    }
    
    ListNode* head1 = NULL;
    ListNode* tail1 = NULL;
    
    ListNode* head2 = NULL;
    ListNode* tail2 = NULL;
    
    ListNode* temp = A;
    
    while (temp != NULL) {
        int d = temp->val;
        
        if (d < B) {
            insertAtTail(head1, tail1, d);
        } 
        else {
            insertAtTail(head2, tail2, d);
        }
        temp = temp->next;
    }
    
    if (head1 == NULL) {
        return head2;
    }
    
    temp = head1;
    
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = head2;
    
    return head1;
} 
