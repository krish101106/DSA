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
    void reorderList(ListNode* head) {
        ListNode *fast=head;
        ListNode *slow=head;
        stack<int> st;
        ListNode *h=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode *l2=slow->next;

        slow->next=NULL;

        while(l2!=NULL){
            st.push(l2->val);
            l2=l2->next;
        }

        while(!st.empty()){
            ListNode *temp=new ListNode(st.top(), h->next);
            h->next=temp;
            h=h->next->next;
            st.pop();
        }
    }
};