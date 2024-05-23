/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int dfs(TreeNode* A) {
    if (A == NULL) {
        return 0;
    }
    
    int left = dfs(A->left);
    if (left == -1) {
        return -1;
    }
    
    int right = dfs(A->right);
    if (right == -1) {
        return -1;
    }
    
    if (abs(left - right) > 1) {
        return -1;
    }
    
    return max(left, right) + 1;
}
 
int Solution::isBalanced(TreeNode* A) {
    return dfs(A) != -1;
}
