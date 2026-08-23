class Solution {
public:

    bool issafe(vector<vector<char>>& board, int row, int col, char dig) {

        // Check row
        for(int j = 0; j < 9; j++) {
            if(board[row][j] == dig)
                return false;
        }

        // Check column
        for(int i = 0; i < 9; i++) {
            if(board[i][col] == dig)
                return false;
        }

        // Check 3x3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for(int i = startRow; i < startRow + 3; i++) {
            for(int j = startCol; j < startCol + 3; j++) {
                if(board[i][j] == dig)
                    return false;
            }
        }

        return true;
    }


    bool helper(vector<vector<char>>& board, int row, int col) {

        // Finished entire board
        if(row == 9)
            return true;

        // Calculate next cell
        int nextrow = row;
        int nextcol = col + 1;

        if(nextcol == 9) {
            nextrow = row + 1;
            nextcol = 0;
        }

        // Already filled
        if(board[row][col] != '.') {
            return helper(board, nextrow, nextcol);
        }

        // Try 1 to 9
        for(char dig = '1'; dig <= '9'; dig++) {

            if(issafe(board, row, col, dig)) {

                board[row][col] = dig;

                if(helper(board, nextrow, nextcol)) {
                    return true;
                }

                // Backtrack
                board[row][col] = '.';
            }
        }

        return false;
    }


    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0);
    }
};