/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool treeIsSame = true;
bool LeftXORTwoNode(struct TreeNode* p, struct TreeNode* q)
{
    if((p->left == NULL || q->left == NULL) && !(p->left == NULL && q->left == NULL))
        return true;
    else
        return false;
}
bool RightXORTwoNode(struct TreeNode* p, struct TreeNode* q)
{
    if((p->right == NULL || q->right == NULL) && !(p->right == NULL && q->right == NULL))
        return true;
    else
        return false;
}
bool NoChild(struct TreeNode* p, struct TreeNode* q)
{
    if(p->left == NULL && q->left == NULL && p->right == NULL && q->right == NULL)
        return true;
    else
        return false;
}
void LEFT_NODE(struct TreeNode* p, struct TreeNode* q)
{
    if (p->val != q->val)
        treeIsSame = false;
    //if p's and q's value are equal
    else
    {
        if (NoChild(p,q))
            ;//do nothing
        //if there exist at least one child about p,q
        else
        {
            //one of the p, q's left child is NULL, but not all
            if(LeftXORTwoNode(p,q))
            {
                treeIsSame = false;
            }
            //all of p,q's left child are NULL
            else if (p->left == NULL && q->left == NULL)
                ;//do nothing
            //all of p,q's left child are not NULL
            else
            {
                LEFT_NODE(p->left, q->left);
            }

            //one of the p, q's right child is NULL, but not all
            if(RightXORTwoNode(p,q))
            {
                treeIsSame = false;
            }
            //all of p,q's right child are NULL
            else if (p->right == NULL && q->right == NULL)
                ;//do nothing
            //all of p,q's right child are not NULL
            else
            {
                RIGHT_NODE(p->right, q->right);
            }
        }
        
    }

}
void RIGHT_NODE(struct TreeNode* p, struct TreeNode* q)
{
    if (p->val != q->val)
        treeIsSame = false;
    //if p's and q's value are equal
    else
    {
        if (NoChild(p,q))
            ;//do nothing
        //if there exist at least one child about p,q
        else
        {
            //one of the p, q's left child is NULL, but not all
            if(LeftXORTwoNode(p,q))
            {
                treeIsSame = false;
            }
            //all of p,q's left child are NULL
            else if (p->left == NULL && q->left == NULL)
                ;//do nothing
            //all of p,q's left child are not NULL
            else
            {
                LEFT_NODE(p->left, q->left);
            }

            //one of the p, q's right child is NULL, but not all
            if(RightXORTwoNode(p,q))
            {
                treeIsSame = false;
            }
            //all of p,q's right child are NULL
            else if (p->right == NULL && q->right == NULL)
                ;//do nothing
            //all of p,q's right child are not NULL
            else
            {
                RIGHT_NODE(p->right, q->right);
            }
        }
        
    }

    
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;
    if (p->val != q->val)
        return false;
    if (NoChild(p,q))
        return true;
    //if p's and q's value are equal
    else
    {
        //one of the p, q's left child is NULL, but not all
        if(LeftXORTwoNode(p,q))
        {
            return false;
        }
        //all of p,q's left child are NULL
        else if (p->left == NULL && q->left == NULL)
            ;//do nothing
        //all of p,q's left child are not NULL
        else
        {
            LEFT_NODE(p->left, q->left);
        }
        
        if(treeIsSame == false)
            return false;
        
        //one of the p, q's right child is NULL, but not all
        if(RightXORTwoNode(p,q))
        {
            return false;
        }
        //all of p,q's right child are NULL
        else if (p->right == NULL && q->right == NULL)
            return true;
        //all of p,q's right child are not NULL
        else
        {
            RIGHT_NODE(p->right, q->right);
        }
        
    }

    return treeIsSame;
}
