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

ListNode* reverseList(ListNode* head)
{
    ListNode* previous = nullptr;
    ListNode* current = head;

    while (current)
    {
        ListNode* next = current->next;  // save next node
        current->next = previous;        // reverse current link
        previous = current;              // move previous forward
        current = next;                  // move current forward
    }

    return previous;
}
};
