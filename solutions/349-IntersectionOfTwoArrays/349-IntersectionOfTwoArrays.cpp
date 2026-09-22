// Last updated: 9/23/2026, 12:21:23 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2(nums2.begin(), nums2.end());
        vector<int> result;

        for (const auto& element1 : set1) {
            auto i=find(set2.begin(), set2.end(), element1);
            if(i!=set2.end()){
                result.push_back(element1);
            }
        }
        return result;
    }
};