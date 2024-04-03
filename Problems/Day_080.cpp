/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode* start = new ListNode(0);
    start->next = A;
    ListNode* curr = A;
    ListNode* prev = start;

    while (curr != NULL) {
        if (curr->next != NULL && (curr->next->val < curr->val)) {
            while (prev->next != NULL && (prev->next->val < curr->next->val)) {
                prev = prev->next;
            }

            ListNode* temp = prev->next;
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = temp;
            prev = start;
        }
        else {                
            curr = curr->next;
        }
    }
    return start->next;
}
