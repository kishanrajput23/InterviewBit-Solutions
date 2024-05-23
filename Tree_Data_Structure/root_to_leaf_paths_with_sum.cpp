/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void solve(TreeNode* A, int B, vector<vector<int>> &ans, int sum, vector<int> temp) {
    if (A == NULL) {
        return ;
    }
    
    temp.push_back(A->val);
    sum += A->val;
    
    if (A->left == NULL && A->right == NULL && sum == B) {
        ans.push_back(temp);
        return ;
    }
    
    solve(A->left, B, ans, sum, temp);
    solve(A->right, B, ans, sum, temp);
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> ans;
    
    if (A == NULL) {
        return ans;
    }
    vector<int> temp;
    int sum = 0;
    
    solve(A, B, ans, sum, temp);
    
    return ans;
}
