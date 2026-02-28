class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

         int n = words.size();
        map<string,int>m;
        for(int i=0;i<n;i++){
            m[words[i]]++ ;
        }
        vector<pair<int,string>>v;
        for(auto ele : m){
            // string a= ele.first;
            // int b = ele.second;
            v.push_back({ele.second,ele.first});
        }
            sort(v.begin(), v.end(), [](auto &a, auto &b){
                   if(a.first == b.first)
                    return a.second < b.second;
                    return a.first > b.first;
            });
        vector<string>ans;
        
        for(int i=0;i<k;i++){
            // if(count==k) break;
            ans.push_back(v[i].second);
            // count++;
        }
        return ans;
    }
};