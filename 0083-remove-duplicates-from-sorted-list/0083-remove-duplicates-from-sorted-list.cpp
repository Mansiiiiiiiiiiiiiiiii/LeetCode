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
        if(!head || !head->next) return head;

        ListNode* curr = head;

        while(curr && curr->next){
            ListNode* temp = curr->next;

            if(curr->val == curr->next->val){
                curr->next = curr->next->next;
            
            }
            else{
                curr = curr->next; //jis point pe wo equal na ho tab age badhao
            }

        }
        return head;
    }
};