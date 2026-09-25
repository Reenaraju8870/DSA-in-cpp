class Solution {
public:
    bool validColor(int node,int col,vector<vector<int>>& graph,vector<int>& color){
        color[node]= col;
        int m=graph[node].size(); //row
        for(int i=0;i<m;i++){
            int ne=graph[node][i];
            if(color[ne]==-1){
                bool ok=validColor(ne,1-col,graph,color);
                if(ok==false) return false;
            }
            else if(color[ne]==color[node]) return false;

        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();   //col
        vector<int> color(n,-1);
        for(int i=0; i<n ;i++){
            if(color[i]==-1){
                bool ans=validColor(i,0,graph,color);
                if(ans==false) return false;
            }
        }
        return true;
        
    }
};