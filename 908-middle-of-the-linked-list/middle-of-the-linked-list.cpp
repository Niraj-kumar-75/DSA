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
    ListNode* middleNode(ListNode* head) {
        ListNode *root = head;
        ListNode *temp = head;
        int count =0;
        while(root!=NULL)
        {
            root = root->next;
            count++;
        }
        int n = count/2;
        int i =0;
        while(i<n)
        {
            temp = temp->next;
            i++;
        }
        return temp;
    }
};