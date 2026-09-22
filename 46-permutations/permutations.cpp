class Solution {
public:
void per(vector<vector<int>>& ans,vector<int>& nums,int begin){
    if(begin>=nums.size()){
        ans.push_back(nums);
        return;
    }
    
    for(int i=begin;i<nums.size();i++){
       swap(nums[begin],nums[i]);
       per(ans,nums,begin+1);
       swap(nums[begin],nums[i]);

    }

}
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        per(ans,nums,0);
        return ans;

        
    }
};