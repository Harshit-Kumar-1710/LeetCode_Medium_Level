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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        ListNode*head=nullptr;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val==temp2->val)
            {
                ListNode*Ok1=new ListNode(temp1->val);
                ListNode*Ok2=new ListNode(temp2->val);
                if(head==nullptr)
                {
                    head=Ok1;
                }
                else
                {
                    ListNode*p=head;
                    while(p->next!=NULL)
                    {
                        p=p->next;
                    }
                    p->next=Ok1;
                }
                Ok1->next=Ok2;
            temp1=temp1->next;
            temp2=temp2->next;
            }
            else if(temp1->val<temp2->val)
            {
                ListNode*Ok1=new ListNode(temp1->val);
                if(head==nullptr)
                {
                    head=Ok1;
                }
                else
                {
                    ListNode*p=head;
                    while(p->next!=NULL)
                    {
                        p=p->next;
                    }
                    p->next=Ok1;
                }
            temp1=temp1->next;
            }
            else
            {
                ListNode*Ok1=new ListNode(temp2->val);
                if(head==nullptr)
                {
                    head=Ok1;
                }
                else
                {
                    ListNode*p=head;
                    while(p->next!=NULL)
                    {
                        p=p->next;
                    }
                    p->next=Ok1;
                }
            temp2=temp2->next;
            }
        }
        while(temp1!=NULL)
        {
            ListNode*Ok1=new ListNode(temp1->val);
                if(head==nullptr)
                {
                    head=Ok1;
                }
                else
                {
                    ListNode*p=head;
                    while(p->next!=NULL)
                    {
                        p=p->next;
                    }
                    p->next=Ok1;
                }
            temp1=temp1->next;
        }   
        while(temp2!=NULL)
        {
            ListNode*Ok1=new ListNode(temp2->val);
                if(head==nullptr)
                {
                    head=Ok1;
                }
                else
                {
                    ListNode*p=head;
                    while(p->next!=NULL)
                    {
                        p=p->next;
                    }
                    p->next=Ok1;
                }
            temp2=temp2->next;
        }
    return head;
    }
};