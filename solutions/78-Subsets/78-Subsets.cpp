// Last updated: 9/23/2026, 12:21:47 AM
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int length=nums.size();
        int subLength=1<<length;

        vector<vector<int>> out;
        vector<int> temp;

        int m=1;
        for(int i=0; i<subLength; i++){
            for(int j=0; j<length; j++){
                if(i&m){
                    temp.push_back(nums[j]);
                }
                m=m<<1;
            }
            m=1;
            out.push_back(temp);
            temp.clear();
        }
        return out;
    }
};