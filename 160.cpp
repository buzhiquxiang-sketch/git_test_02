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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int length_headA = get_length(headA);
        int length_headB = get_length(headB);
        ListNode *cur_headA = headA;
        ListNode *cur_headB = headB;
        ListNode *target = nullptr;
        int sap = length_headB - length_headA;
        if (sap < 0)
        {
            sap = (-sap);
            for (int i=0; i<sap; i++)
                cur_headA = cur_headA->next;
            // cout << "===" << cur_headA->val << endl;
            while (cur_headA)
            {
                // cout << "===" << cur_headA->val << endl;
                // cout << "===" << cur_headB->val << endl; 
                cout << "===" << cur_headA->val << " "<< cur_headB->val <<endl;
                if (cur_headA == cur_headB)
                {
                    target = cur_headA;
                    return target;
                }
                cur_headA = cur_headA->next;
                cur_headB = cur_headB->next;
            }
            return nullptr;
        }
        else if (sap >= 0)
        {
            for (int i=0; i<sap; i++)
                cur_headB = cur_headB->next;
            // cout << "===" << cur_headB->val << endl;
            while (cur_headB)
            {
                // cout << "===" << cur_headA->val << " "<< cur_headB->val <<endl;
                // cout << "===" << cur_headB->val << endl;              
                if (cur_headB == cur_headA)
                {
                    target = cur_headB;
                    return target;
                }
                cur_headA = cur_headA->next;
                cur_headB = cur_headB->next;
            }
            return nullptr;
        }
        return target;
    }
};