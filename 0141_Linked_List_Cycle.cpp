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
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        ListNode *slowNode = head;
        ListNode *fastNode = head->next;
        while(slowNode != fastNode)
        {
            if(fastNode == nullptr || fastNode->next == nullptr) return false;
            slowNode = slowNode->next;
            fastNode = fastNode->next->next;
        }
        return true;
    }
};