/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int leftDepth(struct TreeNode* p, int count)
{
    if (p == NULL)
        return count;
    count++;
    int leftCount = leftDepth(p->left, count);
    int rightCount = rightDepth(p->right, count);
    count = leftCount > rightCount ? leftCount : rightCount;
    return count;
    
}
int rightDepth(struct TreeNode* q, int count)
{
    if (q == NULL)
        return count;
    count++;
    int leftCount = leftDepth(q->left, count);
    int rightCount = rightDepth(q->right, count);
    count = leftCount > rightCount ? leftCount : rightCount;
    return count;   
}

int maxDepth(struct TreeNode* root) {
    int result;
    if (root == NULL)
        return 0;
    int count = 1;
    int leftCount = leftDepth(root->left, count);
    int rightCount = rightDepth(root->right, count);
    result = leftCount > rightCount ? leftCount : rightCount;
    return result;
    
}
