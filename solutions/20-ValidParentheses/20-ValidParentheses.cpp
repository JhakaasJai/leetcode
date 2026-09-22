// Last updated: 9/23/2026, 12:22:09 AM
class Solution {
public:
    int isValid(string s) {

        stack<char> stk;
        for(int i=0; i<s.length(); i++){
            if(stk.empty()){
                stk.push(s[i]);
                continue;
            }
            
            if(stk.top()=='(' && s[i] == ')'||stk.top()=='[' && s[i] == ']'||stk.top()=='{' && s[i] == '}'){
                stk.pop();
                continue;
            }
            stk.push(s[i]);
        }
        if(stk.empty()){
            return 1;
        }
        return 0;
    }
};