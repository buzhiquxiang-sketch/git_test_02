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
class Solution 
{
public:
    ListNode* reverseList(ListNode* head) 
    {
       ListNode *dummy = new ListNode(0, head);
       ListNode *temp = nullptr;
       ListNode *cur  = dummy->next;  // 头节点
       while (cur)
       {
            temp = cur->next;     // 2
            cur->next = dummy->next;
            head->next = nullptr; 
            dummy->next = cur;
            cur = temp;
            showList(dummy);
            puts();
       }
       temp = dummy->next;
       delete dummy;
       return temp;
    }
    void showList(ListNode* head)
    {
        ListNode *temp = head;
        while (temp)
        {
            cout << " " << temp->val;
            temp = temp->next;
        }
    }
};