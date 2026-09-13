class Solution {
public:
    int fib(int n) {
        if (n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else{
            int slt=0;
            int lt=1;
            for(int i=2; i<=n; i++){
                int cu= slt+lt;
                slt=lt;
                lt=cu;
            }
            return lt;
        }
        
        
        
    }
};