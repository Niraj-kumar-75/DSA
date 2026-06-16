class Solution {
public:
    void dfs(int row, int col, vector<vector<char>>& grid,
         vector<vector<bool>>& visited, int rows, int cols) {

    // Step 1: Current cell ko visited mark karo
    visited[row][col] = 1;

    // Step 2: 4 directions define karo
    int dRow[] = {-1, +1, 0, 0};
    int dCol[] = {0, 0, -1, +1};

    // Step 3: 4 directions mein jao
    for (int i = 0; i < 4; i++) {
        int newRow = row + dRow[i];
        int newCol = col + dCol[i];

        // Step 4: Valid cell hai toh DFS call karo
        if (newRow >= 0 && newRow < rows &&
            newCol >= 0 && newCol < cols &&
            grid[newRow][newCol] == '1' &&
            visited[newRow][newCol] == 0) {

            dfs(newRow, newCol, grid, visited, rows, cols);
            // ↑ Yahi hai recursive DFS call
            // Yeh deep jaayega jab tak land milti rahegi
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

    vector<vector<bool>> visited(rows, vector<bool>(cols, 0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == '1' && visited[i][j] == 0) {
                count++;    // ⭐ Naya island mila
                dfs(i, j, grid, visited, rows, cols);
                // ⭐ DFS se poora island mark ho jaayega
            }
        }
    }

    return count;
    }
};