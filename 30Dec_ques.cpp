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
    ListNode* insertionSortList(ListNode* head) {
         if(!head) return NULL;
        ListNode* ans=new ListNode(1000);
        ListNode* temp=ans;
        ListNode* cur=head;
        while(cur){
            while(temp->next && cur->val>temp->next->val) temp=temp->next;
            ListNode* tmp=temp->next;
            temp->next=new ListNode(cur->val); 
            temp->next->next=tmp;
            cur=cur->next;
            temp=ans;
        }
        return ans->next;
    }
};
