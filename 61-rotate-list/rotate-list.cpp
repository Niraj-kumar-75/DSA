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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        // Step 1: length nikaalo aur tail dhoondo
        int len = 1;
        ListNode* tail = head;

        while (tail->next != NULL) {
            tail = tail->next;
            len++;
        }

        // Step 2: effective rotation
        k = k % len;
        if (k == 0)
            return head;

        // Step 3: circular linked list bana do
        tail->next = head;

        // Step 4: new tail dhoondo
        int stepsToNewTail = len - k - 1;
        ListNode* newTail = head;

        while (stepsToNewTail--) {
            newTail = newTail->next;
        }

        // Step 5: new head set karo
        ListNode* newHead = newTail->next;

        // Step 6: circle tod do
        newTail->next = NULL;

        return newHead;
    }
};