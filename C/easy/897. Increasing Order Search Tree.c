/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */



struct TreeNode* travel(struct TreeNode* root, struct TreeNode* temp){
    if (!root) return temp;
    if (!temp) return temp;
    if (root->left){
        temp = travel(root->left, temp);
    }
     
    temp->right = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
    temp = temp->right;
    temp->val = root->val;
    if (root->right){
        temp = travel(root->right, temp);
    }

    return temp;    
}

struct TreeNode* increasingBST(struct TreeNode* root){
    struct TreeNode* empty = (struct TreeNode*)calloc(1, sizeof(struct TreeNode));
    struct TreeNode* i = travel(root, empty);
    
    return empty->right;
}
