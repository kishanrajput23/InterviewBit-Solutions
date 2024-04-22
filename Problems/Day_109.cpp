/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode* A, int &maxDepth, int depth) {
    if (A == NULL) {
        return ;
    }
    depth += 1;
    
    if (A->left == NULL && A->right == NULL) {
        maxDepth = max(maxDepth, depth);
        depth = 0;
        return ;
    }
    
    helper(A->left, maxDepth, depth);
    helper(A->right, maxDepth, depth);
    
}
int Solution::maxDepth(TreeNode* A) {
    int maxDepth = INT_MIN;
    int depth = 0;
    helper(A, maxDepth, depth);
    return maxDepth;
}
