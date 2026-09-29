// Last updated: 9/30/2026, 2:11:38 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int temp=0;
        for( int num : nums){
            temp^=num;
        }

        return temp;
    }
};