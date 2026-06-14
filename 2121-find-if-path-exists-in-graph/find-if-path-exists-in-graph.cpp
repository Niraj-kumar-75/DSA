class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
         // Step 1: Adjacency list banao
        vector<vector<int>> adj(n);
        
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // Step 2: Visited array banao
        vector<int> visited(n, 0);
        
        // Step 3: Queue banao aur source push karo
        queue<int> q;
        q.push(source);
        visited[source] = 1;    // ⭐ YAHAN mark karo
        
        // Step 4: BFS chalao
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            // ⭐ NODE pe check karo, neighbor pe nahi
            if (node == destination) {
                return true;
            }
            
            for (int i = 0; i < adj[node].size(); i++) {
                int neighbor = adj[node][i];
                
                if (visited[neighbor] == 0) {
                    visited[neighbor] = 1;  // ⭐ PUSH ke time mark karo
                    q.push(neighbor);
                }
            }
        }
        
        return false;
    }
};