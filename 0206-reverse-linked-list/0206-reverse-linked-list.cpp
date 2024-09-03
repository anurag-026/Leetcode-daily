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

    ListNode* reverseL(ListNode* head){
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* newHead= reverseL(head->next);
        ListNode * front = head->next;
        front->next = head;
        head->next = nullptr;
        return newHead;
    }

    ListNode* reverseList(ListNode* head) {
        //Iterative Solution
        ListNode *temp= head, *prev=nullptr, *front;
        while(temp != nullptr){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
 
    }
};