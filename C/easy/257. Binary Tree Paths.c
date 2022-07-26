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

void test(struct TreeNode* root, int* returnSize, char**ans, int* temp, int step){
    if (!root)  return;     
    temp[step++] = root -> val;
    
    if (!root->left && !root->right){
        ans[*returnSize] = malloc(50*sizeof(char)*step);
        int index = 0;
        for(int i = 0; i < step-1; i++){
            index += sprintf(ans[*returnSize]+index,"%d->",temp[i]);
        }
        
        sprintf(ans[*returnSize]+index,"%d",temp[step-1]);
        (*returnSize)++;
        return;
    }
    
    test(root->left, returnSize, ans, temp, step);
    test(root->right, returnSize, ans, temp, step);
    return;
}


char ** binaryTreePaths(struct TreeNode* root, int* returnSize){
    int temp[100];
    *returnSize = 0;
    char ** ans = malloc(100*sizeof(char*));
    test(root, returnSize, ans, temp, 0);
    
    return ans;
}
