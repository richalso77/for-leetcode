/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void travel(struct TreeNode* root, bool L, int * ans){
    if (!root)  return;
    if (!root->left && !root->right){
        if (L){
            *ans += root->val;
        }
        return;
    }
    travel(root->left,1,ans);
    travel(root->right,0,ans);    
}

int sumOfLeftLeaves(struct TreeNode* root){
    int ans = 0;
    travel(root,0,&ans);
    return ans;
}
