// Last updated: 9/23/2026, 12:22:00 AM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target){
       int low = 0, high = nums.size()-1;
       while(low <= high){
        int mid = low +(high - low) / 2;
        if(nums[mid] == target){
            low = high = mid;
            while(low > 0 && nums[low - 1] == target)
            low--;
            while(high < nums.size()-1 && nums[high + 1] == target)
            high++;
            return {low, high};
        } else if(nums[mid] < target) low = mid + 1;
        else high = mid - 1;
       }
       return {-1, -1};
    }
};