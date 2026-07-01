class Solution {
public:
    int maxProduct(vector<int>& nums) {
      priority_queue<int>pq;
      for(int i =0;i<nums.size();i++)
      {
        pq.push(nums[i]);
      }  
      int num1 = pq.top();
      pq.pop();
      int num2 = pq.top();
      pq.pop();
     int product = (num1-1) * (num2-1);
     return product;

    }
};