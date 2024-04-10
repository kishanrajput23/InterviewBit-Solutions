/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void invert(TreeNode* A) {
    if (A == NULL) {
        return ;
    }
    
    swap(A->left, A->right);
    
    invert(A->left);
    invert(A->right);
}

TreeNode* Solution::invertTree(TreeNode* A) {
    invert(A);
    return A;
}
