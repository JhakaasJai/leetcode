// Last updated: 9/23/2026, 12:21:38 AM
class Solution {
public:
    int hammingWeight(int n) {
        
        int out=0;
        while(n){
            out+=n&1;
            n=n>>1;
        }
        return out;
    }
};