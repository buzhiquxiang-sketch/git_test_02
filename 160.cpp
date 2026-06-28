/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
  public:
    int get_length(ListNode *arg)
    {
        int count = 0;
        ListNode *cur = arg;
        while (cur)
        {
            count++;
            cur = cur->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if (headA == nullptr || headB == nullptr)   return nullptr;
        int len_A = get_length(headA);
        int len_B = get_length(headB);
        int sap = len_A - len_B;
        ListNode *temp_headA = headA;
        ListNode *temp_headB = headB;
        if (sap < 0)
        {
            std::swap(temp_headA, temp_headB);
            sap = len_B - len_A;
        }
        while (sap)
        {
            temp_headA = temp_headA->next;
            sap --;
        }
        cout << temp_headA->val << endl;
        while (temp_headA)
        {
            if (temp_headA == temp_headB)
            {
                return temp_headA;
            }
            temp_headA = temp_headA->next;
            temp_headB = temp_headB->next;
        }
        return nullptr;
    }
};