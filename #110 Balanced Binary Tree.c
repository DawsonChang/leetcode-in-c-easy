/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int nodeHeight(struct TreeNode* p, bool* type)
{
    if (p == NULL)
        return 0;
    int left = nodeHeight(p->left, type);
    int right = nodeHeight(p->right, type);
    if (abs(left-right) > 1)
        *type = false;
    return left > right ? left+1 : right+1;
}

bool isBalanced(struct TreeNode* root) {

    bool type = true;
    nodeHeight(root, &type);

    return type;
    
}
