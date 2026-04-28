class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int ,vector<int>,less<int> >pq;
        for(int i =0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }
        int diff =0;
        while(pq.size()>1)
        {
            int h1 = pq.top();
            pq.pop();
            int h2 = pq.top();
            pq.pop();
            if(h1!=h2)
            {
                diff= h1-h2;
                pq.push(diff);
            }
            else{
                 diff = h1-h2;
            pq.push(diff);
            }
           
        }
        return pq.top();
    }
};