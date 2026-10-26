class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's voting algo
        int ele;
        int freq=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(freq==0){
                freq=1;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                freq++;
            }
            else{
                freq--;
            }
        }
        //element found now verify
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele) cnt++;
        }
        if(cnt>(n/2)){ 
            return ele;//return the majority element if tru
        }
        return -1;
        
    }
};