// Last updated: 9/23/2026, 12:21:57 AM
class Solution {
public:

    double powOf(double x, long n){

                if(n==0){
            return 1;
        }

        if(n<0){
            return powOf(1/x, -n);
        }

        if(n%2==0){
            return powOf(x*x, n/2);
        }
        
        return x* powOf(x*x, (n-1)/2);
    }
    double myPow(double x, int n) {
        
        return powOf(x, (long)n);
    }
};