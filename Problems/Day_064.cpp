/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::sortList(ListNode* A) {
    ListNode* temp = A;
    vector<int> v;
    
    while (temp != NULL) {
        v.push_back(temp->val);
        temp = temp->next;
    }
    
    sort(v.begin(), v.end());
    
    temp = A;
    for (int i=0; i<v.size(); i++) {
        temp->val = v[i];
        temp = temp->next;
    }
    
    return A;
}
