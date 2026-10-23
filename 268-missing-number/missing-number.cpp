class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int value;
        for(int i=0;i<n+1;i++){
            int flag=0;
            for(int j=0;j<n;j++){
               if(nums[j]==i){
                flag=1;
                break;
               } 
            }
            if(flag==0){
                value=i;
            } 
            
        }
        return value;

        
    }
};