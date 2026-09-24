class Solution {
public:
    int getAns(int i,int j,int n,int m,vector<vector<int>>& dp,vector<vector<int>>& obstacleGrid){
        //base case
       if(i>=n || j>=m || obstacleGrid[i][j]==1) return 0;
       if(i==n-1 && j==m-1) return 1;
       if(dp[i][j]!=-1) return dp[i][j];
       int right=getAns(i+1,j,n,m,dp,obstacleGrid);
       int down=getAns(i,j+1,n,m,dp,obstacleGrid);
       
       return dp[i][j]=right+down;
       


    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        int ans=getAns(0,0,n,m,dp,obstacleGrid);
        return ans;
        
    }
};