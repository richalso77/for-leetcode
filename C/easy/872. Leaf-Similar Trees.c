/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void travel(struct TreeNode* root, int *t, int *index){
    if (!root) return;
    if (!root->left && !root->right){
        t[(*index)++] = root->val;
        return;
    }
    travel(root->left, t, index);
    travel(root->right, t, index);
}

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2){
    int index1 = 0, index2 = 0;
    int *a = malloc(200*sizeof(int));
    int *b = malloc(200*sizeof(int));
    travel(root1, a, &index1);
    travel(root2, b, &index2);
    if (index1 != index2) return 0;
    for (int i = 0; i < index1; i++){
        if (a[i] != b[i]) return 0;
    }
    return 1;
}
