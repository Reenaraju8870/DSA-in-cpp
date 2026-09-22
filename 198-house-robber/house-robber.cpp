class Solution {
public:
    int Solver(int idx,vector<int>& nums,int n,vector<int>& dp){
        if(idx>=n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        //take
        int take=nums[idx]+Solver(idx+2,nums,n,dp);
        //leave
        int leave=0+Solver(idx+1,nums,n,dp);
        dp[idx]=max(take,leave);
        return dp[idx];

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        int res=Solver(0,nums,n,dp);
        return res;
        
    }
};