// Last updated: 9/23/2026, 12:22:18 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {0,0};
    }
};