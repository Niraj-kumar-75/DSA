class Solution {
public:
    vector<int> bfs(int n,vector<vector<int>> &adj,vector<int>&indegree)
    {
        queue<int>q;
        for(int i =0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        int count=0;
        vector<int>ans;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            count++;
            for(int i =0;i<adj[node].size();i++)
            {
                int neigh = adj[node][i];
                indegree[neigh]--;
                if(indegree[neigh]==0)
                {
                    q.push(neigh);
                }
            }
        }
        return ans;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>> adj(n);
        for(int i =0;i<prerequisites.size();i++)
        {
            int course = prerequisites[i][0];
            int prereq = prerequisites[i][1];
            adj[prereq].push_back(course);
        }
        vector<int>indegree(n,0);
        for(int i =0;i<numCourses;i++)
        {
            for(int j =0;j<adj[i].size();j++)
            {
                int neigh = adj[i][j];
                indegree[neigh]++;
            }
        }
        vector<int>ans =bfs(n,adj,indegree);
        if(ans.size()!=n)
        {
            return {};
        }
        return ans;
    }
};