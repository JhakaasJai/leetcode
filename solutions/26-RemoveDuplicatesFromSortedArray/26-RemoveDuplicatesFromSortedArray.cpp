// Last updated: 9/23/2026, 12:22:08 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int temp=nums[nums.size()-1];
        // cout << "First: "<< temp << endl;
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]==temp){
                nums.erase(nums.begin()+i);
                continue;
            }
            temp=nums[i];
            // cout<< temp << endl;
        }

        return nums.size();
    } 
};