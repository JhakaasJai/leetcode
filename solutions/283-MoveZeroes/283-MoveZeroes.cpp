// Last updated: 9/23/2026, 12:21:26 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int j=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};