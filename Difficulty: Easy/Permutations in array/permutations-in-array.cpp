class Solution {
  public:
    bool isPossible(int k, vector<int> &arr1, vector<int> &arr2) {
        // Your code goes here
        
        sort(arr1.begin(),arr1.end());
        sort(arr2.rbegin(),arr2.rend());
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]+arr2[i]<k){
                return false;
                break;
            }
        }
        return true;
    }
};