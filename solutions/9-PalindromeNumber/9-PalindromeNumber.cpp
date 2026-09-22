// Last updated: 9/23/2026, 12:22:14 AM
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string re=s;
        reverse(re.begin(), re.end());
        return s==re ? true : false;
        
    }
};