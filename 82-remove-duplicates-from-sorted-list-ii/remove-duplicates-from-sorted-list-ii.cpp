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
        
        // Create dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* prev = dummy;   // Last confirmed distinct node
        
        while (head != nullptr) {
            
            // If duplicate sequence found
            if (head->next != nullptr && head->val == head->next->val) {
                
                int duplicateValue = head->val;
                
                // Skip all nodes with this duplicate value
                while (head != nullptr && head->val == duplicateValue) {
                    head = head->next;
                }
                
                // Connect prev to next distinct node
                prev->next = head;
                
            } else {
                // No duplicate → move prev forward
                prev = prev->next;
                head = head->next;
            }
        }
        
        return dummy->next;
    }
};