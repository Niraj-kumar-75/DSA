class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long,vector<long long>,less<long long> >pq;
        int n = gifts.size();
        for(int i =0;i<n;i++)
        {
            pq.push(gifts[i]);
        }
        long long ans =0;
        int i =0;
        while(i<k)
        {
            long long x = pq.top();
            pq.pop();
            long long y = sqrt(x);
            pq.push(y);
            i++;
        }
        while(pq.size()>0)
        {
            long long  x = pq.top();
            pq.pop();
            ans+=x;
        }
        return ans;
    }
};