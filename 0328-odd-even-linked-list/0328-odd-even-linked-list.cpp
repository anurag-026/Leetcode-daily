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
    ListNode* oddEvenList(ListNode* head) {
        if(!head   || !head->next) return head;
        ListNode * prev=head, *front=head , *temp =head, *base= head->next;
        int count=0;;
        while(temp != nullptr  && temp->next != nullptr){
            count++;
            front = temp->next;
            temp ->next = temp->next->next;
            prev =temp;
            temp = front;
        }
        if(count %2 == 0)
        front->next = base;
        else {
            prev->next =base;
        }
        return head;
    }
};