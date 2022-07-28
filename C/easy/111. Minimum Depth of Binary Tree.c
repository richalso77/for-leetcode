/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if(!root)
        return 0;
    int a = minDepth(root->left);
    int b = minDepth(root->right);
    
    if (!a && !b)
        return 1;
    if (!a || !b)
        return (a+b+1);
    
    return a>b ? b+1 :a+1;
}
