/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode* A, int B, vector<int> &v) {
    if (A == NULL) {
        return ;
    }
    
    if (A->val == B) {
        v.push_back(A->val);
        return ;
    }
    
    inorder(A->left, B, v);
    if (!v.empty()) { // If the target node is found in the left subtree
        v.push_back(A->val);
        return;
    }
    inorder(A->right, B, v);
    if (!v.empty()) { // If the target node is found in the left subtree
        v.push_back(A->val);
        return;
    }
}

vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> v;
    inorder(A, B, v);
    reverse(v.begin(), v.end());
    return v;
}
