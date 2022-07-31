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

void travel(struct TreeNode* root, int* returnSize, int index, double *ans, int *count){
    if(!root) return;
    if (index+1 > (*returnSize)) (*returnSize) = index+1;
    ans[index] += root->val;
    count[index]++;
    travel(root->left, returnSize, index+1, ans, count);
    travel(root->right, returnSize, index+1, ans, count);
}


double* averageOfLevels(struct TreeNode* root, int* returnSize){
    (*returnSize) = 0;
    double *ans = calloc(10000,sizeof(double));
    int *count = calloc(10000,sizeof(int));
    travel(root, returnSize, 0, ans, count);
    
    for (int i = 0; i < (*returnSize); i++){
        ans[i] /= count[i];
    }
    return ans;
}
