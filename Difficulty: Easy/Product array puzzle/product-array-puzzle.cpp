class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int> output(n, 1);

        int leftProd = 1;
        for (int i = 0; i < n; i++) {
            output[i] = leftProd;
            leftProd *= arr[i];
        }

        
        int rightProd = 1;
        for (int i = n - 1; i >= 0; i--) {
            output[i] *= rightProd;
            rightProd *= arr[i];
        }

        return output;
    }
};
