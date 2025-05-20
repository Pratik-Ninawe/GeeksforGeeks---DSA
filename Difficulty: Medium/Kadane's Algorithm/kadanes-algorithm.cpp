class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int sum=0;
        int maxi=INT_MIN;
        for(int i:arr){
            sum+=i;
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};