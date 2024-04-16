/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    vector<vector<int>> ans;
    if (A == NULL) {
        return ans;
    }
    
    map<int,vector<int>> mp;

    queue<pair<TreeNode*,int>>q;
    q.push({A, 0});

    while (!q.empty()) {

        auto node = q.front().first;
        int dist = q.front().second;
        q.pop();

        mp[dist].push_back(node->val);

        if (node->left != NULL) {
            q.push({node->left, dist-1});
        }

        if (node->right != NULL) {
            q.push({node->right, dist+1});
        }
    }

    for (auto it : mp) {
        ans.push_back(it.second);
    }
    
    return ans;
}
