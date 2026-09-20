class Solution {
public:

    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char,char> mapping={{')', '('}, {']', '['}, {'}', '{'}};
        for(char ch:s){
            if(mapping.find(ch)==mapping.end()) stack.push(ch);
            else if(!stack.empty() && mapping[ch]==stack.top()) stack.pop();
            else return false;
        }
        return stack.empty();
        
    }
};