/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void travel(struct TreeNode* root, char *ans, int *index){
    if(!root) return;
    (*index) += snprintf(ans+(*index), 80000, "%d",root->val);
    if(root->right){
        (*index) += snprintf(ans+(*index), 80000, "(");
        travel(root->left, ans, index);
        (*index) += snprintf(ans+(*index), 80000, ")(");
        travel(root->right, ans, index);
        (*index) += snprintf(ans+(*index), 80000, ")");
    }
    else if(root->left){
        (*index) += snprintf(ans+(*index), 80000, "(");
        travel(root->left, ans, index);
        (*index) += snprintf(ans+(*index), 80000, ")");
    }
    return;
}

char * tree2str(struct TreeNode* root){
    char *ans = malloc(80000*sizeof(char));
    int index = 0;
    travel(root, ans, &index);
    return ans;
}
