class Solution {
public:
set<vector<int>> s;
void GetCombSum(vector<int>& candidates,int idx,int target, vector<int>& combo,vector<vector<int>>& ans){
    
    if(target<0 || idx==candidates.size()){
        return;
    }
    if(target==0){
        if(s.find(combo)==s.end()){//to track all the comb if doesnt exist
            ans.push_back({combo});
            s.insert(combo);
        }
        
        return;
    }
    combo.push_back(candidates[idx]);
    GetCombSum(candidates ,idx+1,target-candidates[idx], combo,ans); //include
    GetCombSum(candidates, idx ,target-candidates[idx], combo,ans); //multiple include
    combo.pop_back();
    GetCombSum(candidates, idx+1, target,combo,ans);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combo;
        vector<vector<int>> ans;
        GetCombSum(candidates,0,target,combo,ans);
        return ans;
    }
};