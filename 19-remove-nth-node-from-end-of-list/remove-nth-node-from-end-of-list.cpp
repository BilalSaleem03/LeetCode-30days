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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            size++;
            temp = temp->next;
        }
        ListNode* temp2 = head;
        for(int i = 1 ; i<size-n ;i++)
        {
            temp2 = temp2->next;
        }
        
        if(head->next == NULL)
        {
            head = NULL;
            return head;
        }
        else if(size == n)
        {
            head = head->next;
            return head;
        }
        else
        {
            temp2->next = temp2->next->next;
            return head;
        }
        

    }
};