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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL||head->next==NULL)return head;
        ListNode*pp=new ListNode(-1);
        ListNode*qq=new ListNode(-1);
         ListNode*p1=pp;
        ListNode*p2=qq;
        while(head!=NULL)
        {
            if(head->val<x)
            {
                p1->next=head;
             p1=head;
            }
            else{
                p2->next=head;
                p2=head;
            }
            head=head->next;
        }
        p2->next=NULL;
        p1->next=qq->next;
        return pp->next;
    }
};
