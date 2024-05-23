/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postOrder(TreeNode* A, vector<int> &v) {
    if (A==NULL) {
        return ;
    }
    
    postOrder(A->left, v);
    postOrder(A->right, v);
    v.push_back(A->val);
}
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> v;
    postOrder(A, v);
    return v;
}
