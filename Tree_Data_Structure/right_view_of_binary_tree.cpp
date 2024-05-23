/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void help(TreeNode* A, vector<int> &v, int level) {
    if (A == NULL) {
        return ;
    }
    
    if (v.size() == level) {
        v.push_back(A->val);
    }
    
    help(A->right, v, level+1);
    help(A->left, v, level+1);
}

vector<int> Solution::solve(TreeNode* A) {
    int level = 0;
    vector<int> v;
    help(A, v, level);
    return v;
}
