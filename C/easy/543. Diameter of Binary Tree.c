/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int travel(struct TreeNode* root, int *ans){
    if(!root) return 0;
    int a = travel(root->left,ans);
    int b = travel(root->right,ans);
    
    if ((a+b) > (*ans)){
        (*ans) = a+b;
    }
    
    if (a>b) return a+1;
    return b+1;
}



int diameterOfBinaryTree(struct TreeNode* root){
    
    int ans = 0;
    
    int a = travel(root, &ans);
    return ans;
}
