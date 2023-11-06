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
int length(ListNode *head){
        int l = 0;
        while(head){
            l++;
            head = head->next;
        }
        return l;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
       if(!headA || !headB) return NULL;

        //step1
        int lA = length(headA), lB = length(headB);

        //step2
        if(lA>lB){
            while(lA>lB){
                headA = headA->next;
                lA--;
            }
        }
        else if(lA<lB){
            while(lA<lB){
                headB = headB->next;
                lB--;
            }
        }
        
        //step 3
        while(headA && headB){
            if(headA==headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
