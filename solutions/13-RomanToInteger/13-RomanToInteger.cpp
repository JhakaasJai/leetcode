// Last updated: 9/23/2026, 12:22:13 AM
class Solution {
public:
    int romanToInt(string s) {
        int current=0, previous=0, temp=0, size=s.length();
        for(int i=size; i>=0; i--){
            current=0;
            switch(s[i]){
                case 'I':
                    current+=1;
                    break;
                case 'V':
                    current+=5;
                    break;
                case 'X':
                    current+=10;
                    break;
                case 'L':
                    current+=50;
                    break;
                case 'C':
                    current+=100;
                    break;
                case 'D':
                    current+=500;
                    break;
                case 'M':
                    current+=1000;
                    break;
                default:
                    cout<<"Error: " << s[i] << endl;
                    break;   
            }

            if(previous>current){
                temp -= current;
            }
            else{
                temp += current;
            }
            previous=current;
        }
    return temp;
    }
};