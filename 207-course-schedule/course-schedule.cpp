class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // adjacency list ko build karo;
        vector<vector<int>> adj(numCourses);
        for(int i =0 ;i<prerequisites.size();i++)
        {
            int course = prerequisites[i][0];
            int prereq = prerequisites[i][1];

            adj[prereq].push_back(course);
        }

        // Ab indegree vector build kro.
        vector<int> indegree(numCourses,0);
        for(int i =0;i<numCourses;i++)
        {
           for(int j =0;j<adj[i].size();j++)
           {
                int neigh = adj[i][j];
                indegree[neigh]++;
           }
        }
        queue<int>q;
        for(int i =0;i<numCourses;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        int count =0;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
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
        return count == numCourses;
    }

};