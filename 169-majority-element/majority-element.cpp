class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mpp;             //better using ordered map (val,freq)
        int major=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        
        for(auto it:mpp){
            if(it.second>(n/2)){
                major=it.first;
            }
        }
        return major;
    }
};