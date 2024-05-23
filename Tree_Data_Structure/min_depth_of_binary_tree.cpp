/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    if (A == NULL) {
        return 1e9;
    }
    
    if (A->left == NULL && A->right == NULL) {
        return 1;
    }
    
    int left = minDepth(A->left);
    int right = minDepth(A->right);
    
    return 1 + min(left, right);
}
