class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int idx=0;
        for(auto i:nums){
            idx=idx^i;   
        }
    
        return idx;

    }
};