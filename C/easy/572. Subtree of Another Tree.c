/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool com(struct TreeNode* root, struct TreeNode* subRoot){
    if(!root){
        if(!subRoot) return 1;
        return 0;
    }
    if(!subRoot) return 0;
    
    if(root->val == subRoot->val){
        if (com(root->left, subRoot->left) && com(root->right, subRoot->right)) 
            return 1;
        return 0;
    }
    
    return 0;
}

void travel(struct TreeNode* root, struct TreeNode* subRoot, bool *ans){
    if(!root || !subRoot) return;
    if(root->val == subRoot->val){
        if(com(root, subRoot)){
            *ans = 1;
            return;
        }     
    }
    travel(root->left, subRoot, ans);
    travel(root->right, subRoot, ans);
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot){
    bool ans = 0;
    travel(root, subRoot, &ans);
    return ans;
}
