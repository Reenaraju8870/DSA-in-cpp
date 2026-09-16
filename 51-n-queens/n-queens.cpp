class Solution {
public:
    bool isSafe(int i , int j , vector<string> &board , int n) {
       int x=i;      //row
       int y=j;       //column
       while(y>=0){
        if(board[x][y]=='Q'){                  //row
            return false;
        }
        y--;
       }
            //diagonal                     //upper
       x=i;
       y=j;
       while(x>=0 && y>=0){
        if(board[x][y]=='Q'){
            return false;
        }
        x--;
        y--;
       }
                                //lower
       x=i;
       y=j;
       while(x<n && y>=0){
        if(board[x][y]=='Q'){
            return false;
        }
        x++;
        y--;
       }
       return true;
    }
    void solve(int col,vector<string>& board,vector<vector<string>>& ans,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int i=0; i<n;i++){
            if(isSafe(i,col,board,n)){
                board[i][col]='Q';
                solve(col+1,board,ans, n);
                board[i][col]='.';

            }

        }

    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n); 
        string s(n, '.');
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0 ,board, ans, n);
        return ans; 
                
    }
};