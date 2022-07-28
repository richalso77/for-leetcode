/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int ans[100];
int size;

void travel(struct TreeNode* T){
    if (!T) 
        return;
    ans[size] = T->val;
    size++;
    travel(T->left);
    travel(T->right);
    return;
}

int* preorderTraversal(struct TreeNode* root, int* returnSize){
    size = 0;
    travel(root);
    *returnSize = size;
    return ans;
}
