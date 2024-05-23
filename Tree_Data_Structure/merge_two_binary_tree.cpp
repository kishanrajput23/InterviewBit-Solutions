/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    if (A == NULL) {
        return B;
    }
    
    if (B == NULL) {
        return A;
    }
    
    A->val += B->val;
    
    A->left = solve(A->left, B->left);
    A->right = solve(A->right, B->right);
    
    return A;
}
