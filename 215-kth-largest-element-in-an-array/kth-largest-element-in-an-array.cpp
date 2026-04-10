class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int,vector<int>,greater<int>> pq;
        int i =0;
        while(i<k)
        {
            pq.push(nums[i]);
            i++;
        }
        i =k;
        while(i<n)
        {
            if(nums[i]>pq.top())
            {
                pq.pop();
                pq.push(nums[i]);
                
            }
            i++;

        }
        return pq.top();

    }
};