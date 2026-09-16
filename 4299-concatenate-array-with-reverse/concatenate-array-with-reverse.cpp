class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        reverse(nums.begin(),nums.end());
        for(int j=0;j<nums.size();j++){
            ans.push_back(nums[j]);
        }
        return ans;


        
    }
};