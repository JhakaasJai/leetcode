// Last updated: 9/30/2026, 2:34:00 AM
class Solution {
public:
    int hammingWeight(int n) {
         
         int count=0;
         while(n!=0){
            if(n&1){
                count++;
            }
            n>>=1;
         }
         return count;
    }
};