/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == NULL)
            return false;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(slow -> next && fast->next && fast->next->next)
        {
            if(slow == fast)
                return true;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        return false;
    }
};