/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

int maxDepth(struct Node* root) {
    if (!root) return 0;
    int temp = 0;
    int a = 0;
    for (int i=0; i<root->numChildren; i++){
        temp = maxDepth(root->children[i]);
        if (a < temp) a = temp;
    }
    return a+1;
}
