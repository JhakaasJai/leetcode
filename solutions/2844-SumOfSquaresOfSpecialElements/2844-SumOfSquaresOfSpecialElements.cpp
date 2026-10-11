// Last updated: 10/11/2026, 8:21:44 PM
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int out=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(n % (i+1) == 0){
                out+=nums[i] * nums[i];
            }
        }

        return out;
    }
};