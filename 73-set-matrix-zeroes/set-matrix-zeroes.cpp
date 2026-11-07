class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       
        int n=matrix.size(); //row
        int m=matrix[0].size();  //col
        vector<int> row(n,0);
        vector<int> col(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){   //keep track
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]||col[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};