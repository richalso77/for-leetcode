/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int travel(struct TreeNode* root, int x, int *f, int *d){
    if (!root) return 0;
    if (root->val == x){
        *d = 1;
        return 1;
    }
    int a = travel(root->left, x, f, d);
    int b = travel(root->right, x, f, d);
    
    if (a || b){
        (*d) ++;
    }
    if (a == 1){
        *f = root->val;
        
    }
    if (b == 1){
        *f = root->val;
    }
    
        if (a || b){
        (*d) ++;
        return 2;
    }

    return 0;
}

bool isCousins(struct TreeNode* root, int x, int y){
    int xf = 0;
    int xd = 0;
    int yf = 0;
    int yd = 0;
    int temp = travel(root, x, &xf, &xd);
    temp = travel(root, y, &yf, &yd);
    if (xf != yf){
        if (xd == yd)
            return 1;
    }
    return 0;
}
