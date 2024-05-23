/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void levelOrderTraversal(TreeNode* root, int &sum) {
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        int n = q.size();
        int add = 0;

        for (int i=0; i<n; i++) {
            TreeNode* temp = q.front();
            q.pop();
            
            add += temp->val;
            
            if (temp->left != NULL) {
                q.push(temp->left);
            }

            if (temp->right != NULL) {
                q.push(temp->right);
            }
        }
        sum = max(sum, add);
    }
}

int Solution::solve(TreeNode* A) {
    int sum = 0;
    levelOrderTraversal(A, sum);
    return sum;
}
