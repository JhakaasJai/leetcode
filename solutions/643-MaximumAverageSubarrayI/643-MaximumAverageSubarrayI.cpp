// Last updated: 9/28/2026, 11:20:31 AM
class Solution {
public:


    double findMaxAverage(vector<int>& nums, int k) {
        size_t size=nums.size();
        double maxAvg=-1;
        double sum=0;
        if(k>size || k==0 || size==0){
            return 0;
        }

        int j=0;
        double num=k;

        while(j<k){
            sum+=nums[j];
            j++;
        }

        maxAvg=sum/num;

        while(j<size){
            
            sum-=nums[j-k];
            sum+=nums[j];
            j++;

            if( (sum/static_cast<float>(k)) > maxAvg){
                maxAvg=sum/num;
            }
        }
        return maxAvg;


    }
};