// Last updated: 9/23/2026, 12:21:18 AM
class Solution {
public:
    int findComplement(int num) {
        int mask=1;

        while(mask<num) mask=(mask<<1)|1;

        return num^mask;
    }
};