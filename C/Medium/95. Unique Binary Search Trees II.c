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

struct TreeNode** build(int start, int end, int *size){
    if (start > end){
        struct TreeNode** temp = (struct TreeNode**)malloc(sizeof(struct TreeNode*));
        temp[0] = 0;
        *size = 1;
        return temp;
    }
    
    struct TreeNode** temp = (struct TreeNode**)malloc(5000 * sizeof(struct TreeNode*));
    *size = 0;
    int i,j,k;
    for (i = start; i <= end; i++){
        int l_size = 0;
        int r_size = 0;
        struct TreeNode** left = build(start, i-1, &l_size);
        struct TreeNode** right = build(i+1, end, &r_size);
        
        for (j = 0; j < l_size; j++){
            for (k = 0; k < r_size; k++){
                temp[*size] = (struct TreeNode*)malloc(sizeof(struct TreeNode));
                temp[*size]->val = i;
                temp[*size]->left = left[j];
                temp[*size]->right = right[k];
                (*size)++;
            }
        }
    }
    return temp;
}

struct TreeNode** generateTrees(int n, int* returnSize){
 

    return build(1, n, returnSize);
}
