// Last updated: 9/23/2026, 12:21:21 AM
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int> mpp;
      for(int x : nums1)
      mpp[x]++;
      vector<int> mppp;
      for(int x : nums2)
      {
        if(mpp[x] > 0)
        mppp.push_back(x);
        mpp[x]--;
      }
       return mppp;

    }
};