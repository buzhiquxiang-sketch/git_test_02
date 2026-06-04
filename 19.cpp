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
        ListNode *dummy = new ListNode(0, head);
        ListNode *fast = dummy;
        ListNode *slow = dummy;
        for (int i=0; i<n+1; i++)
        {
            if (fast == NULL) break;
            fast = fast->next;
        }
        // cout << fast->val << endl;
        while (fast)
        {
            fast = fast->next;
            slow = slow->next;
        }
        // cout << slow->val << endl;
        ListNode *temp = nullptr;
        temp = slow->next;
        slow->next = temp->next;
        delete temp;
        ListNode *new_head = dummy->next;
        delete dummy;
        return new_head;
    }
};