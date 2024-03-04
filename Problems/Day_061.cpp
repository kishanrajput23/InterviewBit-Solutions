/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* sorting(ListNode* A, ListNode* B) {
    // checking if first contains only 1 element
    if (A->next == NULL) {
        A->next = B;
        return A;
    }

    // creating pointers
    ListNode* curr1 = A;
    ListNode* nextNode1 = curr1->next;

    ListNode* curr2 = B;
    ListNode* nextNode2 = curr2->next;

    while (curr2 != NULL && nextNode1 != NULL) {
        if ((curr2->val <= nextNode1->val) && (curr2->val >= curr1->val)) {

            // adding node in between linked list
            curr1->next = curr2;
            nextNode2 = curr2->next;
            curr2->next = nextNode1;

            // moving pointers ahead
            curr1 = curr2;
            curr2 = nextNode2;
        }
        else {
            curr1 = nextNode1;
            nextNode1 = nextNode1->next;

            // if next node is null then directly connect to another list
            if (nextNode1 == NULL) {
              curr1->next = curr2;
              return A;
            }
        }
    }
    return A;
}
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if (A == NULL) {
        return B;
    }

    if (B == NULL) {
        return A;
    }

    if (A->val <= B->val) {
        return sorting(A, B);

    }
    else {
        return sorting(B, A);
    }

    return A;
}
