// Last updated: 9/23/2026, 12:21:34 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if((n>0) && (n&(n-1))==0){
            return true;
        }
        return false;
    }
};