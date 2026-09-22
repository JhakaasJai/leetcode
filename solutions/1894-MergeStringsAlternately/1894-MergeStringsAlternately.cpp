// Last updated: 9/23/2026, 12:21:14 AM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string out= "";
        int i=0, j=0;
        while(word1.size() >i || word2.size() >j){
            if(word1.size() >i){
                out.push_back(word1[i]);
                i++;
            }
            if(word2.size() >j){
                out.push_back(word2[j]);
                j++;
            }
        }
        return out;
    }
};