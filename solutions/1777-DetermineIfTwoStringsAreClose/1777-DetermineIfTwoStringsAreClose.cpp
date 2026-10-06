// Last updated: 10/7/2026, 12:32:40 AM
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.size()!=word2.size()){
            return false;
        }

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        
        for(int i=0; i<word1.size(); i++){
            m1[word1[i]]++;
            m2[word2[i]]++;
        }

        vector<int> freq;
        set<char> c;

        for(auto &[ch,f] : m1){
            freq.push_back(f);
            c.insert(ch);
        }

        for(auto &[ch,f] : m2){
            auto it = find(freq.begin(), freq.end(), f);
            
            if (it != freq.end()) {
                freq.erase(it);
            } else {
                return false;
            }

            if(c.insert(ch).second){
                return false;
            }
        }
        return true;
    }
};