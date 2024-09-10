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
    int GCD(int a, int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

     ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head->next) return head;
        int x=head->val, y;
        for(ListNode* prev=head, *ptr=head->next; ptr;ptr=ptr->next){
            int y=ptr->val;
            ListNode* newNode=new ListNode(gcd(x, y), ptr);
            prev->next=newNode;
            prev=ptr;
            x=y;
        }
        return head;
    }
};
