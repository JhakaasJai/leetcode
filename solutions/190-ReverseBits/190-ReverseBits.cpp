// Last updated: 9/23/2026, 12:21:40 AM
class Solution {
public:
    int reverseBits(int n) {
        int out = 0;
        for (int i = 0; i < 32; i++) {
            out = (out << 1) | (n & 1);  // Shift left and add the last bit of n
            n >>= 1;                     // Shift n to the right to process the next bit
        }
        return out;
    }
};
