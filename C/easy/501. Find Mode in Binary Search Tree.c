/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().

 */

void travel(struct TreeNode* root, int* countList){
    if (!root)  return;
    countList[root->val+100000]++;
    travel(root->left, countList);
    travel(root->right, countList);
}

int* findMode(struct TreeNode* root, int* returnSize){
    
    int *countList = calloc(200001,sizeof(int));
    int *ans = calloc(200001,sizeof(int));
    *returnSize = 1;
    int i;
    int temp = 0;
    
    travel(root,countList);
    
    for(i=0; i<200001; i++){
        if (countList[i] > temp){
            temp = countList[i];
            *returnSize = 1;
            ans[(*returnSize)-1] = i-100000;
        }
            
        else if (countList[i] == temp){
            
            (*returnSize) ++;
            ans[(*returnSize)-1] = i-100000;

        }
    }
    

    
    return ans;
}
