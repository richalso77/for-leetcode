/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int com(struct TreeNode* T){
    if(!T)
        return 1;
    
    int a = com(T->left);
    int b = com(T->right);
    
    if (!a || !b)
        return 0;
    
    if (a>b){
        if ((a-b)>1)
            return 0;
        return (a+1);
    }
    
    if ((b-a)>1)
        return 0;
    
    return (b+1);
}

bool isBalanced(struct TreeNode* root){
    
    if (com(root))
        return 1;
    
    return 0;
}
