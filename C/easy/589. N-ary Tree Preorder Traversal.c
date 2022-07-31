/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void travel(struct Node* root, int* returnSize, int *ans){
    if (!root) return;
    ans[(*returnSize)++] = root->val;
    for(int i = 0; i < root->numChildren; i++){
        travel(root->children[i], returnSize, ans);
    }
}

int* preorder(struct Node* root, int* returnSize) {
    (*returnSize) = 0;
    int *ans = malloc(100000*sizeof(int));
    travel(root, returnSize, ans);
    return ans;
}
