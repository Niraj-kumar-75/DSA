class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      priority_queue<int,vector<int>,less<int> >pq;
      for(int i =0;i<nums.size();i++)
      {
        pq.push(nums[i]);
      }
      int i =0;
      int ans=0;
      while(i<k)
      {
        ans = pq.top();
        pq.pop();
        i++;
      }
      return ans;

    }
};