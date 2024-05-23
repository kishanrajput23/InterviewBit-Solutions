/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool isSymmetricUtil(TreeNode* leftSubtree, TreeNode* rightSubtree) {
    // If both subtrees are NULL, they are symmetric
    if (leftSubtree == NULL && rightSubtree == NULL) {
        return true;
    }
    
    // If only one of the subtrees is NULL, they are not symmetric
    if (leftSubtree == NULL || rightSubtree == NULL) {
        return false;
    }
    
    // If the values of the nodes are not equal, they are not symmetric
    if (leftSubtree->val != rightSubtree->val) {
        return false;
    }
    
    // Recur for the left subtree of the left child and the right subtree of the right child
    // Recur for the right subtree of the left child and the left subtree of the right child
    bool left = isSymmetricUtil(leftSubtree->left, rightSubtree->right);
    bool right = isSymmetricUtil(leftSubtree->right, rightSubtree->left);
    
    return left && right;
}

int Solution::isSymmetric(TreeNode* A) {
    // If the tree is empty, it is symmetric
    if (A == NULL) {
        return 1;
    }
    // Call the helper function with the root's left and right subtrees
    return isSymmetricUtil(A->left, A->right) ? 1 : 0;
}
