class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* first = head;

        // Find kth node from beginning
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        // Find kth node from end
        ListNode* second = head;
        ListNode* temp = first;

        while (temp->next != nullptr) {
            temp = temp->next;
            second = second->next;
        }

        swap(first->val, second->val);

        return head;
    }
};