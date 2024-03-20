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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy;
        ListNode* ptr = dummy;
        
        if(list1 == NULL)
        {
            if(list2 == NULL)
            {
                return list1;
            }
            else
            {
                return list2;
            }
        }
        else
        {
            if(list2 == NULL)
            {
                return list1;
            }
        }
        
        
        if(list2->val < list1->val)
        {
            dummy = ptr = list2;
            list2 = list2->next;
        }
        else
        {
            dummy = ptr = list1;
            list1 = list1->next;
        }
     
        
        while(list1 != NULL && list2 != NULL)
        {
            if(list2->val < list1->val)
            {
                ptr->next = list2;
                list2= list2->next;
                ptr = ptr->next;
            }
            else
            {
                ptr->next = list1;
                ptr= ptr->next;
                list1 = list1->next;
            }
        }
        if(list1 == NULL)
        {
            ptr->next = list2;
        }
        if(list2 == NULL)
        {
            ptr->next = list1;
        }
        return dummy;
    }
};