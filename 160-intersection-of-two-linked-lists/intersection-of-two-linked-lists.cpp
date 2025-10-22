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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        unordered_set<ListNode*>S;
        ListNode*temp1=headA;
        while(temp1!=NULL)
        {
            S.insert(temp1);
            temp1=temp1->next;
        }
        ListNode*temp2=headB;
        while(temp2!=NULL)
        {
            if(S.find(temp2)!=S.end())
            {
                return temp2;
            }
            S.insert(temp2);
            temp2=temp2->next;
        }
    return nullptr;    
    }
};