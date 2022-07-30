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
    int a = travel(root->left, ans);
    int b = travel(root->right, ans);
    int temp = root->val;
    (b > a) ? (root->val = b-a) : (root->val = a-b);
    (*ans) += root->val;
    return a+b+temp;
}

int findTilt(struct TreeNode* root){
    int ans = 0;
    travel(root, &ans);
    return ans;
}
