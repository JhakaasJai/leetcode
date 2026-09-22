// Last updated: 9/23/2026, 12:22:05 AM
class Solution {
public:
    int strStr(string haystack, string needle) {

        int index=0, flag=false;

        if(haystack.size()<needle.size()){
            return -1;
        }

        for(int i=0; i<haystack.size() - needle.size() + 1; i++){
            if(haystack[i]==needle[0]){
                for(int j=0; j<needle.length(); j++){
                    if(haystack[i+j]==needle[j]){
                        flag=true;
                    } else {flag=false; break;}
                    cout << i << " " << j << " " << flag << endl;
                }
            }
            if(flag==true){
                return i;
            }
            
        }
        return -1;
    }
};