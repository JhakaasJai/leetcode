// Last updated: 9/24/2026, 12:13:09 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                continue;
            }
            i++;
        }
    }
};