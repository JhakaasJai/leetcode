// Last updated: 9/24/2026, 12:00:54 AM
class Solution {
public:

    bool check(vector<char> &arr, char &c){
        for(auto ch : arr){
            if(ch==c){
                return true;
            }
        }
        return false;
    }

    void digitAdd(int num, vector<char> &arr){

        if(num==1 || num==0){
            return;
        }

        string s=to_string(num);
        for(auto c: s){
            arr.push_back(c);
        }
    }

    int compress(vector<char>& chars) {
        vector<char> arr;
        char temp=' ';
        int count=0;
        
        for(auto c: chars){
            
            if(temp!=c){
                digitAdd(count, arr);
                count=0;
            }
            
            if(temp==c){
                count++;

            } else{
                arr.push_back(c);
                count++;
                temp=c;
            }
            
        }
        digitAdd(count, arr);
        chars=arr;
        return arr.size();
    }
};