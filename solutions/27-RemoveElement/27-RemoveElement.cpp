// Last updated: 9/23/2026, 12:22:06 AM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
            }
        }
        return nums.size();
    }
};