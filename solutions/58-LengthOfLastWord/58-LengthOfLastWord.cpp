// Last updated: 9/23/2026, 12:21:55 AM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size()-1;
        int count=0, flag=0;
        for(int i=size; i>=0; i--){
            if(flag!=1 && s[i]!=' '){
                flag = 1;
            }
            if(flag == 1 && s[i]== ' '){
                break;
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};