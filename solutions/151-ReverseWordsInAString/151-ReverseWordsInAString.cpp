// Last updated: 9/23/2026, 12:52:49 AM
class Solution {
public:
    string reverseWords(string s) {
        vector<string> arr;
        string out="";
        istringstream iss(s);
        string word;

        while(iss>>word){
            out = word + " " + out;
        }
        out.pop_back();

        return out;
    }
};