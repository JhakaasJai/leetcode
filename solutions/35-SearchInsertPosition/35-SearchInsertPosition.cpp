// Last updated: 9/23/2026, 12:21:58 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        int mid;
        
        while(left<=right){
            
            mid=left+((right-left)/2);
            if(nums[mid] > target){
                right=mid-1;
                continue;
            }
            if(nums[mid] < target) {
                left=mid+1;
                continue;
            }
            if(nums[mid] == target){
               return mid;
            }
            
            break;
        }
        
        return left+((right-left)/2);
    }
};