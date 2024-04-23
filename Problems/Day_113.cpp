/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<in> Solution::solve(TreeNode* A) {
  queue<TreeNode*> q;
    stack<int> st;
    q.push(A);
    vector<int> v;
    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();

        st.push(temp->val);

        if (temp->right != NULL) {
            q.push(temp->right);
        }

        if (temp->left != NULL) {
            q.push(temp->left);
        }
    }

    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    return v;
}
