class Solution {
public:
    int Solver(int n,int m,int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i==n-1 && j==m-1) return grid[i][j];
        if(i>=n ||j>=m) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        //right
        int right=grid[i][j] + Solver(n,m,i,j+1,grid,dp);
        int down=grid[i][j] + Solver(n,m,i+1,j,grid,dp);
        dp[i][j]=min(right,down);
        return dp[i][j];

    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();    //row
        int m=grid[0].size(); //col
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return Solver(n,m,0,0,grid,dp);
        
    }
};