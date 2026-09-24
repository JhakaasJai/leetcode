// Last updated: 9/25/2026, 1:14:57 AM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0){
            return true;
        }
        int i=0, j=0;
        while(true){
            cout << s[i] << " " << t[j] << "\n";
            
            if(s[i]==t[j]){
                i++;
                j++;
            } else{
                j++;
            }

            if(i>s.size()){
                return true;
            }
            
            if(j>t.size()){
                break;
            }
            
            
        }

        return false;
    }
};