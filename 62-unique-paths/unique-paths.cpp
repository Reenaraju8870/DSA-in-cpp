class Solution {
public:
    int Solver(int i,int j,int m,int n, vector<vector<int>>& dp){
        if(i==m-1 && j==n-1) return 1; 
        if(i>=m||j>=n) return 0;
        if(dp[i][j]!= -1) return dp[i][j];
        //right
        int right=Solver(i+1,j,m,n,dp);
        int down=Solver(i,j+1,m,n,dp);
        dp[i][j]=right+down;
        return dp[i][j];       
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans=Solver(0,0,m,n,dp);
        return ans;
    }
};