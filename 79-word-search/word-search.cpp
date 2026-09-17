class Solution {
public:
    bool getAns(int row, int col,int pos,vector<vector<char>>& board,vector<vector<int>>& vis, string word,int n,int m){
        if(pos==word.size()){  //all letters checked?
            return true;
        }
        if(row<0 || col<0 || row>=n ||col>=m){    //out of grid
            return false;
        }
        if(vis[row][col]==1){  //visited?
            return false;
        }
        if(board[row][col]!=word[pos]){ //not in order
            return false;
        }
        vis[row][col]=1;
        bool ans1=getAns(row+1,col,pos+1,board,vis,word,n,m);
        bool ans2=getAns(row,col-1,pos+1,board,vis,word,n,m);
        bool ans3=getAns(row-1,col,pos+1,board,vis,word,n,m);
        bool ans4=getAns(row,col+1,pos+1,board,vis,word,n,m);
        vis[row][col]=0;
        if(ans1==true|| ans2==true || ans3==true || ans4==true) return true;
       
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(); //row
        int m=board[0].size();//col
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){ //start frm 0th idx
                    vector<vector<int>> vis(n,vector<int>(m,0));
                    bool ans=getAns(i,j,0,board,vis,word,n,m);
                    if(ans==true) return true;
                }
                
            }
        }
        return false;
        
    }
};