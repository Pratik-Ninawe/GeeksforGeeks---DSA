// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int mini=INT_MAX, maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(mini>arr[i]) mini=arr[i];
            if(maxi<arr[i]) maxi=arr[i];
        }
        return {mini,maxi};
    }
};