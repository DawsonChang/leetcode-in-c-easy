/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA;
    struct ListNode *q = headB;
    if (p == NULL || q == NULL)
        return NULL;
    if (p == q)
        return p;

    while(1) {
        if (p == q) {
            return p;
        }
        p = p -> next;
        q = q -> next;
        if (p == NULL && q == NULL)
            return NULL;
        if (p == NULL)
            p = headB;
        if (q == NULL)
            q = headA;
        
    }

}
