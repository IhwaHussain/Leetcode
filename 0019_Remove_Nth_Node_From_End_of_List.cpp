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
    int getListLength(ListNode* head)
    {
        if(head == nullptr) return 0;
        else return 1 + getListLength(head->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        n = getListLength(head) -n;
        if(n == 0) return head->next;
        ListNode *head2 = head;
        while(n>1)
        {
            head2 = head2->next;
            n--;
        }
        head2->next = head2->next->next;
        return head;
    }
};