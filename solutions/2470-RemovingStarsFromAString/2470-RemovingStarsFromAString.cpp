// Last updated: 10/8/2026, 11:10:07 PM
class Solution {
public:
    string removeStars(string s) {
        
        string ss;
        for(char c: s){
            if(c == '*' && ss.size() != 0){
                ss.pop_back();
                continue;
            }
            ss.push_back(c);
        }

        return ss;
    }
};