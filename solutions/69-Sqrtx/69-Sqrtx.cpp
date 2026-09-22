// Last updated: 9/23/2026, 12:21:50 AM
class Solution {
public:
    int mySqrt(int x){
        int low = 1, high = x;
        while(low <= high){
            long long mid = (long long)low + (high - low) / 2;
            if(mid*mid == x)
            return mid;
            else if(mid*mid < x) low = mid + 1;
            else high = mid - 1;
        }
        return high;
    }
};