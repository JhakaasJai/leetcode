// Last updated: 10/15/2026, 12:05:22 AM
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return nullptr;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next->next;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* middle = slow->next;
        slow->next = slow->next->next;
        delete middle; // Free up memory to prevent memory leaks
        
        return head;
    }
};
