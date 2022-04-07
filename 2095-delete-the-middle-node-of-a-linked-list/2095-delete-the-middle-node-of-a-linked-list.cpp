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
    ListNode* deleteMiddle(ListNode* head) {
        
         if (head == NULL) {
          return NULL;
          }
       if (head->next == NULL) {
          delete head;
          return NULL;
           }
        
         ListNode* temp1 = head, *temp2 = head, *temp3;
        
        while((temp1 != NULL) && (temp1->next != NULL)){
            
            temp1 = temp1->next->next;
            temp3 = temp2;
            temp2 = temp2->next;
           
        }
       
        temp3->next = temp2->next;
        temp2->next = NULL;
        return head;
        
        
    }
};