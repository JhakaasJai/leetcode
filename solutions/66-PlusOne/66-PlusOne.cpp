// Last updated: 9/23/2026, 12:21:53 AM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> a=digits;
        int size=a.size()-1, carry=1;

	for(int i=size; i>=0 ; i--) {
		if(carry==1) {
			if(a[i]+1!=10) {
				carry=0;
				a[i]+=1;
			} else {
				a[i]=0;
			}
		} else {
			break;
		}


	}
	if(carry==1) {
		a.insert(a.begin(),1);
	}
	return a;
    }
};