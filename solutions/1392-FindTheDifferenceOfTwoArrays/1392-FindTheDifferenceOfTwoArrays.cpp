// Last updated: 10/3/2026, 11:00:53 PM
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        set<int> s1(nums1.begin(), nums1.end());
      set<int> s2(nums2.begin(), nums2.end());

      for (auto it1 = s1.begin(); it1 != s1.end(); ) {

      auto it2 = s2.find(*it1);

          if (it2 != s2.end()) {
              s2.erase(it2);
              it1 = s1.erase(it1);
        }
            else {
              ++it1;
             }
    }

        vector<vector<int>> answer;
        nums1.assign(s1.begin(), s1.end());
        nums2.assign(s2.begin(), s2.end());
        answer.push_back(nums1);
        answer.push_back(nums2);
        
        return answer;
    }
};