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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode*fast=head;
        int c=1;
        while(fast->next!=NULL)
        {
            c++;
            fast=fast->next;
        }
        k=k%c;
        fast->next=head;
        for(int i=0;i<c-k;i++)
        {
           fast=fast->next;
        }
        head=fast->next;
        fast->next=NULL;
        return head;
    }
};
