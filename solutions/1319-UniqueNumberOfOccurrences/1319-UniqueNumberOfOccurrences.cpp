// Last updated: 10/6/2026, 11:17:26 AM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int> m;

        for(int num: arr){
            m[num]++;
        }

        set<int> s;

        for(auto & [num,freq]: m){
            if(!s.insert(freq).second){
                return false;
            }
        }

        return true;

    }
};