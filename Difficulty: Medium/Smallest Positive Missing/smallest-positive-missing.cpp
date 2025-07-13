class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int a = 1; 

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == a) {
                a++;  
            }
        }
        return a;
    }
};
