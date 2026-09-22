// Last updated: 9/23/2026, 12:21:30 AM
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0){
            return false;
        }
        while(n){
            
            if(n==1){
                return true;
            }
            if(n%2 && n%3 && n%5){
                return false;
            }

            if(n%2==0){
                n/=2;
            }
            if(n%3==0){
                n/=3;
            }
            if(n%5==0){
                n/=5;
            }
        }
        return true;
    }
};