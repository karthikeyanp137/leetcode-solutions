class Solution {
public:
    bool dfs(vector<vector<char>>& board, string &word, int i, int j, int k) {
        // Entire word matched
        if (k == word.size()) return true;

        // Boundary + character check
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size())
            return false;

        if (board[i][j] != word[k])
            return false;

        // Mark as visited
        char temp = board[i][j];
        board[i][j] = '#';

        // Explore 4 directions
        bool found =
            dfs(board, word, i + 1, j, k + 1) ||
            dfs(board, word, i - 1, j, k + 1) ||
            dfs(board, word, i, j + 1, k + 1) ||
            dfs(board, word, i, j - 1, k + 1);

        // Backtrack (restore character)
        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (dfs(board, word, i, j, 0))
                    return true;
            }
        }

        return false;
    }
};