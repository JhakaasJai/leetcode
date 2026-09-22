// Last updated: 9/23/2026, 12:21:31 AM
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {

    vector<int> copy = nums;
    int size = nums.size(), b, c;
    vector<int> out(size, 0);
    c = count(nums.begin(), nums.end(), 0);
    if (c == 0) {
      b = accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
      for (int i = 0; i < size; i++) {
        out[i] = b / nums[i];
      }
    } else if (c == 1) {
      auto itr = find(nums.begin(), nums.end(), 0);
      int index = distance(nums.begin(), itr);
      copy.erase(copy.begin() + index);
      out[index] = accumulate(copy.begin(), copy.end(), 1, multiplies<int>());
    }
    return out;
  }
};
