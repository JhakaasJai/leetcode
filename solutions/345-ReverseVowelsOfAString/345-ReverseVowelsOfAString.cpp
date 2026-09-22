// Last updated: 9/23/2026, 12:21:24 AM
class Solution {
public:

    bool isVowel(char c){
        c=tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        
        int i=0, j=s.size()-1;

        while(i<j){
            if(!isVowel(s[i])){
                i++;
            }
            if(!isVowel(s[j])){
                j--;
            }
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }

        }
        return s;
    }
};