/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* getMid(ListNode* &A) {
    ListNode* slow = A;
    ListNode* fast = A;
    
    while (fast != NULL) {
        fast = fast->next;
        
        if (fast != NULL) {
            fast = fast->next;
        }
        
        slow = slow->next;
    }
    return slow;
}

ListNode* reverse(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* nextNode = NULL;
    
    while (curr != NULL) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int Solution::lPalin(ListNode* A) {
    if (A == NULL || A->next == NULL) {
        return 1;
    }
    
    ListNode* mid = getMid(A);
    
    mid->next = reverse(mid);
    
    ListNode* temp = mid->next;
    mid->next = NULL;
    
    ListNode* t = A;
    
    while (t != NULL && temp != NULL) {
        if (t->val != temp->val) {
            return 0;
        }
        
        t = t->next;
        temp = temp->next;
    }
    
    return 1;
}
