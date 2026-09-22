// Last updated: 9/23/2026, 12:21:52 AM
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        int sum;
        std::string bit = "";

        while(i >= 0 || j >= 0 || carry) {
            sum = carry;

            if(i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if(j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            carry = sum / 2;
            bit = std::to_string(sum % 2) + bit;
        }

        return bit;
    }
};
