class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;                  //[1,1,5]
        for(int i=n-2;i>=0;i--){     //[2,1,|5,3,0,0]  
            if(nums[i]<nums[i+1]){  //    i |i+1
                index=i;
                break;
            }
        }
        
        
        for(int i=n-1;i>index && index!=-1;i--){    //[1,1,|5|]  [1,5,1]
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);   //[2,|3|,5,|1|,0,0]
                break;                       //   index
            }
        }
       
        reverse(nums.begin()+index+1,nums.end());
      
        
    }
};