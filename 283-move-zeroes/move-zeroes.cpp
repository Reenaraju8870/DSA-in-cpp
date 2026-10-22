class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> arr;
        int n=nums.size();
        for(int i=0;i<n;i++){      //O(N)
            if(nums[i]!=0){
                arr.push_back(nums[i]);
            }
        }
        for(int i=0;i<arr.size();i++){  //O(x)
            nums[i]=arr[i];
        }
        for(int i=arr.size();i<n;i++){   //O(N-x)
            nums[i]=0;
        }
   
        
    }
};