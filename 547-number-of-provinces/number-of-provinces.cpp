class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,int node,vector<bool>&visit)
    {
        visit[node]=true;
        for(int i=0;i<isConnected[node].size();i++)
        {
            if(visit[i]==false && isConnected[node][i]==1)
            {
                dfs(isConnected,i,visit);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int ans =0;
        vector<bool>visit(n,0);
        for(int i =0;i<n;i++)
        {
            if(visit[i]==false)
            {
                dfs(isConnected,i,visit);
                ans +=1;
            }
        }
        return ans;
    }
};