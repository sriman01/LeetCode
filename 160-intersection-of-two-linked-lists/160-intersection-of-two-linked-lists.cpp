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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *a = headA, *b = headB;
        int count1 = 0, count2 = 0;
		
       ListNode *curr1 = headA, *curr2 = headB ;
        
        while(curr1 != NULL){
            
             count1 ++ ;
            curr1 = curr1 -> next;
            
        }
        
        while(curr2 != NULL){
            
             count2 ++ ;
            curr2 = curr2 -> next;
            
        }
                                        
       
        while(count1>count2) {
            count1--;
            a=a->next;
        }
        
		
        while(count2>count1) {
            count2--;
            b=b->next;
        }
        
        while(a!=b) {
            a=a->next;
            b=b->next;
        }
        
        return a;
        
        
    }
};