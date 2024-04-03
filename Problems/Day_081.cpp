/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
// function to find the middle of the linked list
ListNode* getMid(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

// fucntion to find the reverse of the linked list
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


ListNode* Solution::reorderList(ListNode* A) {
    // step 1 : finding mid of linked list
    ListNode* mid = getMid(A);

    // step 2 : reverse the 2nd part of linked list
    ListNode* secondPart = reverse(mid->next);

    // step 3 : make last node of 1st part is NULL
    mid->next = NULL;

    // step 4 : assigning 1st part of list
    ListNode* firstPart = A;

    // iterating till 2nd part become null
    while (secondPart != NULL) {
        ListNode* temp1 = firstPart->next;      // storing the address of next Node of 1st part
        firstPart->next = secondPart;
        
        ListNode* temp2 = secondPart->next;     // storing the address of next Node of 2nd part
        secondPart->next = temp1;

        // moving pointers ahead
        firstPart = temp1;      
        secondPart = temp2;
    }
    return A;
}
