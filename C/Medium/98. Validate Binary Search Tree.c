/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool travel (struct TreeNode* root, int *small, int *check){
    if (!root) return 1;
    
    if (!travel(root->left, small, check))
        return 0;
    
    if (root->val < (*small))
        return 0;
    if (root->val == (*small)){
        if ((*check) == root->val && (*check) == INT_MIN)
            (*check) = 0;
        else
            return 0;
    }
    (*small) = root->val;
    if (!travel(root->right, small, check))
        return 0;
    return 1;
}

bool isValidBST(struct TreeNode* root){
    int small = INT_MIN;
    int check = INT_MIN;
    return travel(root, &small, &check);
}
