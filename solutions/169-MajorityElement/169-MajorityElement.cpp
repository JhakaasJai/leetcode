// Last updated: 10/14/2026, 12:32:40 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count=0;
        int candidate=0;

        for(int num: nums){
            if(count==0){
                candidate=num;
            }
            
            if(num == candidate){
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};