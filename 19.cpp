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
       ListNode *temp_01 = nullptr;
       ListNode *cur = dummy;
       int size = get_size(head);
       if (n == 1 && size == 1)
       {
            return nullptr;
       }
       int count_forard = size - n + 1;   
       int count_move = count_forard - 1;
       while (cur && count_move > 0)
       {
            count_move --;
            cur = cur->next;
       }
       std::cout << cur->val << std::endl; // 1
       temp_01 = cur->next;      // 要删除的节点
       cur->next = temp_01->next;
       delete temp_01; temp_01 = nullptr;
       temp_01 = dummy->next;
       delete dummy;    dummy = nullptr;
       return temp_01;
    }
    int get_size(ListNode* head)
    {
        ListNode *temp = head;
        int i = 0;
        while (temp)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
};
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
        ListNode *slow  = dummy;
        ListNode *fast  = dummy;
        while (n>0)
        {
            n--;
            fast = fast->next;
        }
        while (fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode *temp = slow->next;
        slow->next = temp->next;
        delete temp;    temp = nullptr;
        temp = dummy->next;
        delete dummy;
        return temp;
    }
};