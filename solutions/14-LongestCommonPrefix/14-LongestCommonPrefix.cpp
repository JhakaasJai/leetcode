// Last updated: 9/23/2026, 12:22:11 AM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int lowCount=strs[0].size();
        string cmp=strs[0];
        for(int i=1; i<strs.size(); i++){
            for(int j=0; j<=(lowCount<strs[i].size()?lowCount:strs[i].size()); j++){
                if(cmp[j]!=strs[i][j]){
                    if(lowCount>j){
                        lowCount=j;
                    }
                    break;
                }
                
            }
        }
        return cmp.substr(0,lowCount);
    }
};