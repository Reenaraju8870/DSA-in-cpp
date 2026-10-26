class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's voting algo
        int ele=0;
        int freq=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            if(freq==0){
                ele=nums[i];
            }
            if(nums[i]==ele){
                freq++;
            }
            else{
                freq--;
            }
        }
        
        return ele;
    }
};