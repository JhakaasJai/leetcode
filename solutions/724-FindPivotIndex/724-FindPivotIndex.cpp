// Last updated: 9/29/2026, 3:15:47 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int totalSum=0, sum=0;
        for(int num: nums){
            totalSum+=num;
        }

        for(int i=0; i<nums.size(); i++){
            if(sum==totalSum-sum-nums[i]){
                return i;
            }
            sum+=nums[i];
        }

        return -1;

    }
};