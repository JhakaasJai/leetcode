// Last updated: 9/23/2026, 12:22:01 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto k=find(nums.begin(), nums.end(), target);

        if(k!=nums.end()){
            return distance(nums.begin(), k);
        }
        return -1;

        
    }
};