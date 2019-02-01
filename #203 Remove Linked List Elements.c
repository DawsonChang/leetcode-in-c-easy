/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL)
        return head;
    struct ListNode* x = head;
    while (x -> val  == val) {
        head = x -> next;
        x = x -> next;
        if (head == NULL)
            break;
    }
    if (head == NULL)
        return head;
    struct ListNode* y = head;
    while (1) {
        y = x;
        x = x -> next;
        if (x == NULL)
            break;
        if (x -> val == val) {
            y -> next = x -> next;
            x = y;
        }
        
    }
    return head;
}
