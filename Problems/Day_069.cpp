/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* floydCycleDetect(ListNode* &head) {
    if (head == NULL) {
        return NULL;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (slow != NULL && fast != NULL) {
        fast = fast->next;
        
        if (fast != NULL) {
            fast = fast->next;
        }
        
        slow = slow->next;
        
        if (slow == fast) {
            return slow;
        }
    }
    return NULL;
}

ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if (A == NULL) {
        return NULL;
    }
    
    ListNode* intersection = floydCycleDetect(A);
    if (intersection == NULL) {
        return NULL;
    }
    
    ListNode* slow = A;
    
    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
