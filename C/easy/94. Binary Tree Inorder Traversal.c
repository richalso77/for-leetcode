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

void travel(struct TreeNode* root, int *locate){
    if (root == NULL)
        return;
    
    travel(root->left,locate);
    ans[*locate] = root->val;
    *locate += 1;
    travel(root->right,locate);
}


int* inorderTraversal(struct TreeNode* root, int* returnSize){
    *returnSize = 0;
    
    travel(root, returnSize);
    
    return ans;
}
