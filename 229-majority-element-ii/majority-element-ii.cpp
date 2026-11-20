class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> ans;
        vector<int> res;                 //element,count
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        for(auto it:ans){
            if(it.second>n/3){
                res.push_back(it.first);
            }
        }
        return res;
    }
};