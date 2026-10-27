
class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n, '#'));

        // Create exactly one path:
        // Move right across the first row.
        for (int j = 0; j < n; j++) {
            grid[0][j] = '.';
        }

        // Move down the last column.
        for (int i = 1; i < m; i++) {
            grid[i][n - 1] = '.';
        }

        return grid;
    }
};
