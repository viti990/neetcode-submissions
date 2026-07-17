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
        if(head == nullptr)
        {
            return {};
        }
        ListNode *currentAdress{head}, *nextAdress{head->next}, *aux{};
        head->next = nullptr;
        
        while(nextAdress != nullptr)
        {
            aux = currentAdress;
            currentAdress = nextAdress;
            nextAdress = currentAdress->next;
            currentAdress->next = aux;
            /*std::cerr << "Aux: " << aux->val
             << " Current Adress:" <<  currentAdress->val
             << " Next Adress: " << nextAdress->val << '\n';*/
        }        

        return currentAdress;
    }
};
