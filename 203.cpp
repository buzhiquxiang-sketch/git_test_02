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
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *dummy = new ListNode(0, head);
        ListNode *cur = dummy;
        ListNode *temp = nullptr;
        while (cur)
        {
            temp = cur->next;
            if (temp == nullptr) break;
            if (temp->val == val)
            {
                cur->next = temp->next;
                delete temp;
            }
            else
                cur = cur->next;
        }
        temp = dummy->next;
        delete dummy;
        return temp;
    }
};