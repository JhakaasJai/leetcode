// Last updated: 9/23/2026, 12:21:45 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* prev = head;
        ListNode* curr = head;
        if(curr==nullptr){
            return head;
        }
        curr=curr->next;
        while(curr!=nullptr){
            if(prev->val==curr->val){
                curr=curr->next;
                prev->next=curr;
            }
            else{
                curr=curr->next;
                prev=prev->next;
            }

        }

        return head;
    }
};