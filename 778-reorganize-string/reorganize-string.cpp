class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>freq;
        for(char i:s)
        {
            freq[i]++;
        }
        priority_queue<pair<int,char> >pq;
        for(auto it:freq)
        {
            pq.push({it.second,it.first});
        }
        string ans ="";
        // if(pq.size()==1)
        // {
        //     auto top = pq.top();
        //     pq.pop();
        //     ans.push_back(top.second);
        // }
        while(pq.size()>=2)
        {
            auto[f1,c1] = pq.top();
            pq.pop();
            auto [f2,c2] = pq.top();
            pq.pop();
            
            ans.push_back(c1);
            ans.push_back(c2);
            

            f1--;
            f2--;

            if(f1>0)
            {
                pq.push({f1,c1});
            }
            if(f2>0)
            {
                pq.push({f2,c2});
            }
        }
        if(!pq.empty())
         {
            if(pq.top().first > 1) return ""; // ❌ impossible
            ans.push_back(pq.top().second);
         }
        return ans;
    }
};