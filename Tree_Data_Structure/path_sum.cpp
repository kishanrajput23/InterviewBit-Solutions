/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void DFS(TreeNode* root, int sum, int B, int &res) {
    if (root == NULL) {
        return ;
    }
    
    sum += root->val;
    
    if (root->left == NULL && root->right == NULL) {
        if (sum == B) {
            res = 1;
            return ;
        }
    }
    
    DFS(root->left, sum, B, res);
    DFS(root->right, sum, B, res);
}
int Solution::hasPathSum(TreeNode* A, int B) {
    int res = 0;
    int sum = 0;
    DFS(A, sum, B, res);
    return res;
}
