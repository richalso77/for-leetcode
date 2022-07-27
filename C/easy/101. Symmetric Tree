/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool com(struct TreeNode* a, struct TreeNode* b){
    if (!a){
        if (!b)
            return true;
        else
            return false;
    }
    if (!b)
        return false;
    

    
    if (a->val != b->val)
        return false;
    
    if (!com(a->left,b->right))
        return false;
    if (!com(a->right,b->left))
        return false;
    
    return true;
}


bool isSymmetric(struct TreeNode* root){
    return com(root->left,root->right);
}
