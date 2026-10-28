class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                if(mpp.find(it.first+1)==mpp.end() && mpp.find(it.first-1)==mpp.end()){
                    ans.push_back(it.first);
                }
            }
        }
        return ans;
    }
};