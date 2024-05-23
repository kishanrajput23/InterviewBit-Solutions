/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void preOrder(TreeNode* A, vector<int> &v) {
    if (A == NULL) {
        return ;
    }
    
    v.push_back(A->val);
    preOrder(A->left, v);
    preOrder(A->right, v);
}
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> v;
    preOrder(A, v);
    return v;
}
