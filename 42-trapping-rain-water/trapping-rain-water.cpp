class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        int l=0;
        int r=n-1;
        int lmax=height[l];
        int rmax=height[r];
        int water=0;
        
        while(l<r){
            if(lmax<rmax){
                l++;
                lmax=max(lmax,height[l]);
                water+=lmax-height[l];
               

            }
            else{
                r--;
                rmax=max(rmax,height[r]);
                water+=rmax-height[r];

            }

           
           
        }
               
        return water;
        
    }
};