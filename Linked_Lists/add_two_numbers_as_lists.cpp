/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
    
// function to insert nodes at tail
void insertAtTail(ListNode* &head, ListNode* &tail, int val) {
    ListNode* temp = new ListNode(val);
        
    // if list is already empty
    if (head == NULL) {
        head = temp;
        tail = temp;
        return ;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
}
    
ListNode* add(ListNode* first, ListNode* second) {
    int carry = 0;
        
    ListNode* ansHead = NULL;
    ListNode* ansTail = NULL;
        
    while (first != NULL || second != NULL || carry != 0) {
        int val1 = 0;
        if (first != NULL) {
            val1 = first->val;
        }
            
        int val2 = 0;
        if (second != NULL) {
            val2 = second->val;
        }
            
        int sum = carry + val1 + val2;
        int digit = sum%10;
            
        // adding nodes to ans
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
            
        if (first != NULL) {
            first = first->next;
        }
            
        if (second != NULL) {
            second  = second->next;
        }
    }
        
    return ansHead;
}

//Function to add two numbers represented by linked list.
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
        ListNode* ans = add(A, B);
        
        return ans;
}
