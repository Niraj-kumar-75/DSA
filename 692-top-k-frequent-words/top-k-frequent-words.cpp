class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        // Step 1: Frequency map
        unordered_map<string,int> freq;
        for(string s : words) {
            freq[s]++;
        }

        // Step 2: Custom comparator
        auto cmp = [](const pair<int,string>& a,
                      const pair<int,string>& b) {
            if(a.first == b.first)
                return a.second > b.second; // string ASC (min first)
            return a.first < b.first;       // freq DESC
        };

        // Step 3: Max Heap with custom comparator
        priority_queue<pair<int,string>,
                       vector<pair<int,string>>,
                       decltype(cmp)> pq(cmp);

        for(auto &it : freq) {
            pq.push({it.second, it.first});
        }

        // Step 4: Pop k elements
        vector<string> res;
        while(k--) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};