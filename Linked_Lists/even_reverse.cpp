/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::solve(ListNode* A) {   
    ListNode* temp = A;
    vector<int> v;
    
    while (temp != NULL) {
        v.push_back(temp->val);
        temp = temp->next;
    }
    
    vector<int> v1;
    
    for (int i=1; i<v.size(); i+=2) {
        v1.push_back(v[i]);
    }
    
    reverse(v1.begin(), v1.end());
    int count = 0;
    for (int i=1; i<v.size(); i+=2) {
        v[i] = v1[count++];
    }
    
    temp = A;
    int i = 0;
    while (temp != NULL) {
        temp->val = v[i++];
        temp = temp->next;
    }
    return A;
}
