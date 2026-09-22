// Last updated: 9/23/2026, 12:21:49 AM
class Solution {
public:
    
int count_arrangements(int a, int b){
    int n = a + b;
    int k = min(a, b);
    long long result = 1;
    for (int i = 1; i <= k; i++){
        result = result * (n - i + 1) / i;
    }
    return (int)result;
}

int climbStairs(int n){
    int total = 0;
    for (int a = 0; a <= n / 2; a++){
        int b = n - 2 * a;
        total += count_arrangements(a, b);
    }
    return total;
}

    
};