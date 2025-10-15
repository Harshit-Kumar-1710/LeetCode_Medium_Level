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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        ListNode*temp1=head;
        ListNode*Final=nullptr;
        ListNode*temp2=head->next;
        while(temp1!=NULL)
        {
            ListNode*Ok=new ListNode(temp1->val);
            if(Final==nullptr)
            {
                Final=Ok;
            }
            else
            {
                ListNode*why=Final;
                while(why->next!=nullptr)
                {
                    why=why->next;
                }
                why->next=Ok;
            }
            if(temp1->next!=NULL)
            {
                temp1=temp1->next->next;
            }
            else
            {
                temp1=temp1->next;
            }
        }
        while(temp2!=NULL)
        {
            ListNode*Ok=new ListNode(temp2->val);
            ListNode*why=Final;
            while(why->next!=nullptr)
            {
                why=why->next;
            }
            why->next=Ok;
            if(temp2->next!=NULL)
            {
                temp2=temp2->next->next;
            }
            else
            {
                temp2=temp2->next;
            }
        }
    return Final;
    }
};