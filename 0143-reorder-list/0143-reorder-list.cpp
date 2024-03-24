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
    void reorderList(ListNode* head) {
        
        ListNode* t = head;
        ListNode* end = head;
        ListNode* ePre = NULL;
        
        while(end->next != NULL)
        {
            ePre = end;
            end = end->next;
        }
        
        while(t != NULL && t->next !=NULL && end->next != t && t!=ePre)
        {
            end->next = t->next;
            t->next = end;
            ePre->next = NULL;
            if(t->next != NULL && t->next->next != NULL)
            {
                t = t->next->next;
            }
            else
            {
                break;
            }
            
            ListNode* e = ePre;
            while(end != e)
            {
                ePre = end;
                end = end->next;
            }
            
        }
        
    }
};