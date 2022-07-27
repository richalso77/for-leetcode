/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* travel(int* x, int numsSize,int loca){
    
    struct TreeNode * T = calloc(1,sizeof(struct TreeNode));
    
    int a;
    a = (numsSize)/2;
    
    T->val = x[a+loca];
    
    if (a>0){
        T->left = travel(x,a,loca);
    }
    
    if ((numsSize-1)/2 > 0){
        T->right = travel(x,numsSize-a-1,a+1+loca);
    }
    
    return T;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    
    
    
    return  travel(nums, numsSize, 0);
    
    
    
}
