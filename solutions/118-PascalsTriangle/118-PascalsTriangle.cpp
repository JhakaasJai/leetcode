// Last updated: 9/23/2026, 12:21:43 AM
class Solution {
public:
void padding(vector<int> &arr){
    arr.push_back(0);
    arr.insert(arr.begin(), 0);
}

void paddingRemove(vector<int> &arr){
    arr.erase(arr.begin());
    arr.erase(arr.end());
}

void pascalStep(vector<int> &arr){
    
    int size=arr.size();
    vector<int> temp;
    for(int i=0; i<size-1; i++){
        temp.push_back(arr[i]+arr[i+1]);
    }
    arr=temp;
}
    vector<vector<int>> generate(int numRows){
    
    vector<int> arr={1};
    vector<vector<int>> out;
    out.push_back(arr);
    
    for(int i=0; i<numRows-1; i++){
        padding(arr);
        pascalStep(arr);
        out.push_back(arr);
    }
    
    return out;
}
};