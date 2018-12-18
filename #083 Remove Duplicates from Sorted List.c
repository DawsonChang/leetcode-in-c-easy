/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void delete_node(struct ListNode* previous, struct ListNode* current)
{
    previous->next = current->next;
}
struct ListNode* deleteDuplicates(struct ListNode* head) {
    
    if (head == NULL)
        return head;
    
    if (head->next == NULL)
        return head;
    
    struct ListNode* previous = malloc(sizeof(struct ListNode*));
    struct ListNode* current = malloc(sizeof(struct ListNode*));
    previous = head;
    current = previous->next;

    while(current->next != NULL)
    {
        //printf("%d ", temp->val);
        if(previous->val == current->val)
        {
            delete_node(previous, current);
            current = previous->next;
            
        }
        else
        {
            previous = previous->next;
            current = previous->next;
        }
    }
    if (previous->val == current->val)
    {
        previous->next = NULL;
    }
    return head;
    
}
