/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* createMapping(TreeNode* A, int B, map<TreeNode*, TreeNode*> &nodeToParent) {
    
    TreeNode* res = NULL;
    
    queue<TreeNode*> q;
    q.push(A);
    nodeToParent[A] = NULL;
    
    while (!q.empty()) {
        TreeNode* front = q.front();
        q.pop();
        
        if (front->val == B) {
            res = front;
        }
        
        if (front->left != NULL) {
            q.push(front->left);
            nodeToParent[front->left] = front;
        }
        
        if (front->right != NULL) {
            q.push(front->right);
            nodeToParent[front->right] = front;
        }
    }
    return res;
} 

int burnTree(TreeNode* root, map<TreeNode*, TreeNode*> &nodeToParent) {
    map<TreeNode*, bool> visited;
    int time = 0;
    
    queue<TreeNode*> q;
    q.push(root);
    visited[root] = true;
    
    while (!q.empty()) {
        int n = q.size();
        bool flag = 0;
        
        for (int i=0; i<n; i++) {
            TreeNode* front = q.front();
            q.pop();
            
            if (front->left != NULL && !visited[front->left]) {
                flag = 1;
                q.push(front->left);
                visited[front->left] = true;
            }
            
            if (front->right != NULL && !visited[front->right]) {
                flag = 1;
                q.push(front->right);
                visited[front->right] = true;
            }
            
            if (nodeToParent[front] != NULL && !visited[nodeToParent[front]]) {
                flag = 1;
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]] = true;
            }
        }
        if (flag == 1) {
            time++;
        }
    }
    return time;
}

int Solution::solve(TreeNode* A, int B) {
    map<TreeNode*, TreeNode*> nodeToParent;
    TreeNode* targetNode = createMapping(A, B, nodeToParent);
    
    int ans = burnTree(targetNode, nodeToParent);
    return ans;
}
