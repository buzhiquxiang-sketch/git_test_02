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
    ListNode* swapPairs(ListNode* head) {
        if (nullptr == head || head->next == nullptr)    return head;
        ListNode *dummy = new ListNode(0, head);
        ListNode *cur = dummy;
        ListNode *temp_01 = nullptr;
        ListNode *temp_02 = nullptr;
        ListNode *temp_03 = nullptr;
        while (cur && cur->next && cur->next->next)
        {
            temp_01 = cur->next;       // 后一个
            temp_02 = temp_01->next;   // 后二个
            temp_03 = temp_02->next;   // 后三个

            temp_02->next = temp_01;
            temp_01->next = temp_03;
            cur->next = temp_02;

            cur = temp_01;
        }

        temp_01 = dummy->next;
        delete dummy; dummy = nullptr;
        return temp_01;
    }
};