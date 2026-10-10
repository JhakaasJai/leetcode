// Last updated: 10/10/2026, 9:43:30 PM

class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;

        string currentString = "";
        int k = 0;

        for (char c : s) {
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            }
            else if (c == '[') {
                countStack.push(k);
                stringStack.push(currentString);

                k = 0;
                currentString = "";
            }
            else if (c == ']') {
                int repeat = countStack.top();
                countStack.pop();

                string previousString = stringStack.top();
                stringStack.pop();

                string decoded = "";

                for (int i = 0; i < repeat; i++) {
                    decoded += currentString;
                }

                currentString = previousString + decoded;
            }
            else {
                currentString += c;
            }
        }

        return currentString;
    }
};
