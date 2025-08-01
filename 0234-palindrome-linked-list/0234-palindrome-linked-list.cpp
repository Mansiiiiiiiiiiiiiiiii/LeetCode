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
    // ListNode* reverse(ListNode* head){
 
    //     ListNode* prev = nullptr;
    //     ListNode* curr = head;
 
    //     while(curr){
    //         ListNode* temp = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = temp;
    //     }
 
    //     return prev;
 
    // }
 
    bool isPalindrome(ListNode* head) {

        // //middle of the linked list

        // ListNode* slow = head;
        // ListNode* fast = head;
 
        // while(fast && fast->next){
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }

        // //
        // ListNode* head2 = reverse(slow);
 
        // while(head2){
        //     if(head->val != head2->val) return false;
 
        //     head = head->next;
        //     head2 = head2->next;
        // }
 
        // return true;
        
     stack<int>st;
     ListNode* temp = head;
     while(temp != NULL){
        st.push(temp->val);
        temp= temp->next;
     }
     temp = head;
     while(temp != NULL){
        if(temp->val != st.top()) return false;
        temp = temp->next;
        st.pop(); 
     }
     return true;
    }
};