class Solution {
public:
    bool ispossible(vector<int>&weights,int mid,int days)
    {
         int requiredDays = 1;
        int currentLoad = 0;

        for (int i = 0; i < weights.size(); i++)
        {
            currentLoad = currentLoad + weights[i];
            if (currentLoad <= mid)
            {
                // currentLoad += weights[i];
                continue;
            }
            else
            {
                requiredDays++;
                currentLoad = weights[i];
            }
        }

        return requiredDays <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(),weights.end());
        int sum =0;
        for(int i =0;i<weights.size();i++)
        {
            sum = sum + weights[i];
        }
        int high = sum;
        int ans = high;
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            if(ispossible(weights,mid,days))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid +1;
            }
        }
        return ans;
    }
};