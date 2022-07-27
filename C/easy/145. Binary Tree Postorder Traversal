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

int size;

void travel(struct TreeNode* root,int * ans){
    if (!root)
        return;
    travel(root->left,ans);
    travel(root->right,ans);
    ans[size] = root->val;
    size++;
    return;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    
    int *ans = calloc(100,sizeof(int));
    
    size = 0;
    
    travel(root,ans);
   
    *returnSize = size;
    return ans;
}
