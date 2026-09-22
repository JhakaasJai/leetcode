// Last updated: 9/23/2026, 12:21:42 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans = 0;
       for(int x : nums){
        ans^=x;
       }
       return ans;
    }
};