// Last updated: 9/23/2026, 12:21:28 AM
class Solution {
public:
    int numSquares(int n) {
    vector<int> dp(n+1, n);
    dp[0]=0;
    
    for(int i=1; i<=n; ++i){
        for(int j=1; i>=j*j; ++j){
            dp[i]=min(dp[i], dp[i-j*j]+1);
        }
    }
    return dp[n];
    }
};

