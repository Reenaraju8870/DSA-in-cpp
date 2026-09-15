class Solution {
public:
void getString(string& combo,int idx,string& digits, vector<string>& res,string mapping[]){
    if(idx>=digits.length()){
        res.push_back(combo);
        return;
    }
    int num= digits[idx]-'0';
    string value= mapping[num];

    for(int i=0;i<value.length();i++){
        combo.push_back(value[i]);
        getString(combo,idx+1,digits,res,mapping);
        combo.pop_back();
    }
    
}
    vector<string> letterCombinations(string digits) {
 
        int idx=0;
        string combo;
        vector<string> res;
         if (digits.empty()) return res;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
        };
        
        getString(combo,idx,digits,res,mapping);
        return res;

    }
};