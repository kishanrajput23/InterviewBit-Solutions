/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* getMid(ListNode* A) {
    ListNode* slow = A;
    ListNode* fast = A->next;
    
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

ListNode* reverse(ListNode* A) {
    ListNode* prev = NULL;
    ListNode* curr = A;
    ListNode* nextNode = NULL;
    
    while (curr != NULL) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
ListNode* Solution::subtract(ListNode* A) {
    // base case
    if (A == NULL || A->next == NULL) {
        return A;
    }
    
    ListNode* temp1 = A;
    
    // finding mid of LL
    ListNode* mid = getMid(A); 
    if (!mid) {
        return A;
    }
    
    // reversing elemets from mid
    ListNode* rev = reverse(mid); 
    
    // storing the current node so that we can join it later after reversing it again
    ListNode* x = rev;       
    
    // this helps to add the reverse LL after performing operations
    ListNode* y = NULL;         
    
    
    while (temp1 != mid) {
        temp1->val = rev->val - temp1->val;
        y = temp1;
        temp1 = temp1->next;
        rev = rev->next;
    }
    
    ListNode* z = x;
    y->next = reverse(x);
    z->next = NULL;
    return A;
}
