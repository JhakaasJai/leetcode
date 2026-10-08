// Last updated: 10/8/2026, 11:06:15 PM
class Solution {
public:
    string removeStars(string s) {
        
        stack<int> out;
        for(char c: s){
            if(c == '*' && !out.empty()){
                out.pop();
                continue;
            }
            out.push(c);
        }

        string str = "";
        while (!out.empty()) {
            str.push_back(out.top()); 
            out.pop();
        }

        reverse(str.begin(), str.end());

        return str;
    }
};