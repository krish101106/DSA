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
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *mid=slow;
        ListNode *prev=nullptr;

        while(mid!=nullptr){
            ListNode *front=mid->next;
            mid->next=prev;
            prev=mid;
            mid=front;
        }

        //slow->next=nullptr;

        //prev is the reversed part

        ListNode *t1=head;
        ListNode *t2=prev;
        //for odd lenghth it will move out of the loop
        while(t1!=nullptr && t2!=nullptr){
            if(t1->val != t2->val){
                return false;
            }

            t1=t1->next;
            t2=t2->next;
        }

        return true;
    }
};