/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode *result, *current_node;
    if (l1 == NULL)
    {
        return l2;
    }
    else if (l2 == NULL)
    {
        return l1;
    }
    
    if (l1->val > l2->val)
    {
        result = l2;
        l2 = l2->next;
    }
    else if (l1->val <= l2->val)
    { 
        result = l1;
        l1 = l1->next;
    }
    
    current_node = result;

    while (l1 != NULL || l2 != NULL)
    {
        if (l1 == NULL)
        {

            current_node->next = l2;
            current_node = current_node->next;
            l2 = l2->next;
        }
    
        else if (l2 == NULL)
        {
    
            current_node->next = l1;
            current_node = current_node->next;
            l1 = l1->next;
        }
        else
        {
            if (l1->val > l2->val)
            {

                current_node->next = l2;
                current_node = current_node->next;
                l2 = l2->next;
            }
            else if (l1->val <= l2->val)
            { 

                current_node->next = l1;
                current_node = current_node->next;
                l1 = l1->next;
            }
        }
  
    }
    return result;
}
