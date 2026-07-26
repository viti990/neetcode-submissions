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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        if(list1 == 0 && list2 == 0)
        {
            return {};
        }
        else if(list1 == 0)
        {
            return list2;
        }
        else if(list2 == 0)
        {
            return list1;
        }
        ListNode* head;

        if (list1->val < list2->val)
        {
            head = list1;
            list1 = list1->next;
        }
        else
        {
            head = list2;
            list2 = list2->next;
        }

        ListNode* tail = head;
        //bool a{list1==0}, b{list2==0};
        //std::cout << a << ' ' << b << '\n';
        while(list1 != 0 && list2 != 0)
        {
            if(list1->val < list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        //bool a{list1->next==0}, b{list2->next==0};
        //std::cout << a << ' ' << b << '\n';
        //std::cout << tail->val << ' ' << list1->val << ' ' << list2->val << '\n';
        while (list2 != 0)
        {
            tail->next = list2;
            list2 = list2->next;
            tail = tail->next;
        }
        //std::cout << tail->val << ' ' << list1->val << ' ' << list2->val << '\n';
        while(list1 != 0)
        {
            tail->next = list1;
            list1 = list1->next;
            tail = tail->next;
            //std::cout << tail->val << ' ' << list1->val << ' ' << list2->val << '\n';
        }
        return head;
    }
};
