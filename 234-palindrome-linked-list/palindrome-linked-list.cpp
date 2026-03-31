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
        ListNode *root = head;
        vector<int>ans;
        while(root!=NULL)
        {
            ans.push_back(root->val);
            root = root->next;
        }
        int start = 0;
        int end =ans.size()-1;
        while(start<end)
        {
            if(ans[start]!=ans[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};