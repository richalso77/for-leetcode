/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

    
int count(struct TreeNode* T, int targetSum, int sum){
    if(!T)
        return 0;
    int a = count(T->left,targetSum,sum+T->val);
    
    if (a==-1)
        return -1;
    
    int b = count(T->right,targetSum,sum+T->val);
    
    if (b==-1)
        return -1;
    
    if(!a && !b){
        if(T->val + sum == targetSum)
            return -1;
    }
    
    return 1;
    
    
}
    

bool hasPathSum(struct TreeNode* root, int targetSum){
    if(!root)
        return 0;
    
    if (count(root,targetSum,0) == -1)
        return 1;
    
    return 0;
    
}
