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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr1 = list1;
        ListNode*ptr2 =list2;
        priority_queue<int,vector<int>,greater<int>>pq;
        // ListNode *ans
        while(ptr1!=NULL)
        {
            pq.push(ptr1->val);
            ptr1 = ptr1->next;
        }
        while(ptr2!=NULL)
        {
            pq.push(ptr2->val);
            ptr2 = ptr2->next;
        }
        ListNode* head = NULL;
        ListNode* tail = NULL;
        while(!pq.empty())
        {
            int value = pq.top();
            pq.pop();
            ListNode* newNode= new ListNode(value);
            if(head==NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
};