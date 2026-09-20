class Solution {
public:
    bool isPair(char last, char curr){
        return (last=='(' && curr==')') || (last=='[' && curr==']') || (last=='{' && curr=='}');

    }
    bool isValid(string s) {
    
        stack<char> stack;
        
        for(char curr:s){
            if(!stack.empty()){
                char last=stack.top();
                if(isPair(last,curr)){
                    stack.pop();
                    continue;
                }
            }
            stack.push(curr);

        }
        return stack.empty();
        
    }
};