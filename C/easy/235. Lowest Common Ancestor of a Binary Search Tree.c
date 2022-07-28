/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* ans = 0;

int travel(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q){
    if(!root)
        return 0;
    
    
    int a = travel(root->left,p,q);
    int b = travel(root->right,p,q);
    
    
    if (a && b){
        ans = root;
        return 0;
    }
    if (a || b){
        if((p->val == root->val) || (q->val == root->val)){
            ans = root;
            return 0;
        }
        return 1;
    }
    
    if((p->val == root->val) || (q->val == root->val))
        return 1;
    return 0;
}




struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {

    
    int a = travel(root,p,q);
    return ans;
}
