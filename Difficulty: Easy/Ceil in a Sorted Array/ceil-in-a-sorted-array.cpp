// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int mini=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=x)
                mini=min(mini, arr[i]);
        }
        return (mini==INT_MAX) ? -1 : (find(arr.begin(), arr.end(), mini))-arr.begin();
        
    }
};