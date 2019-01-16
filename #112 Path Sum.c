/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool output;
void recursionFunc(struct TreeNode* root, int sum){
    if (root == NULL){
        if (sum == 0){
            output = true;
        }   
    }
    else{
        int k = root->val;
        bool left_s = (root->left == NULL);
        bool right_s = (root->right == NULL);

        if ((!left_s && !right_s) || (left_s && right_s)){
            recursionFunc(root->left, sum-k);
            recursionFunc(root->right, sum-k);
        }
        else if (!left_s && right_s)
            recursionFunc(root->left, sum-k);
        
        else if (left_s && !right_s)
            recursionFunc(root->right, sum-k);
    }
}
bool hasPathSum(struct TreeNode* root, int sum) {
    if (root == NULL)
        return false;
    
    output = false;
    int k = root->val;
    bool left_s = (root->left == NULL);
    bool right_s = (root->right == NULL);

    if ((!left_s && !right_s) || (left_s && right_s)){
        recursionFunc(root->left, sum-k);
        recursionFunc(root->right, sum-k);
    }
    else if (!left_s && right_s)
        recursionFunc(root->left, sum-k);

    else if (left_s && !right_s)
        recursionFunc(root->right, sum-k);
    return output;
}
