class Solution {
public:
    bool isValid(int row,int col,vector<vector<char>>& board,char num){
        //row
        for(int i=0;i<9;i++){
            if(board[row][i]==num) return false;
        }
        //col
        for(int j=0;j<9;j++){
            if(board[j][col]==num) return false;
        }
        //grid
        int stRow=(row/3)*3;
        int stCol=(col/3)*3;
        for(int i=stRow;i<=stRow+2;i++){
            for(int j=stCol;j<=stCol+2;j++){
                if(board[i][j]==num) return false;
            }
        }
        return true;
    }
    bool Solver(int row,int col,vector<vector<char>>& board){
        //base cond
        if(row==9){
            return true;
        }
        int nextRow=row ,nextCol=col+1;
        if(nextCol==9){
            nextCol=0;
            nextRow+=1;
        }
        if(board[row][col]!='.') return Solver(nextRow,nextCol,board);

         for(char num = '1'; num <= '9'; num++) {
            if(isValid(row, col, board, num)) {
                board[row][col] = num;
                if(Solver(nextRow, nextCol, board) == true)
                    return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        Solver(0,0,board);
        
    }
};