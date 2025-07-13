class Solution {
public:
    bool findPair(vector<int>& arr, int x) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Use two pointers to find the pair
        int i = 0, j = 1;
        while (j < arr.size()) {
            int diff = arr[j] - arr[i];
            
            // If we find a pair with the required difference, return true
            if (diff == x && i != j) {
                return true;
            }
            
            // If the difference is smaller than x, move j to the right to increase the difference
            if (diff < x) {
                j++;
            }
            // If the difference is larger than x, move i to the right to reduce the difference
            else {
                i++;
                // Avoid moving i past j (the two pointers need to be different)
                if (i == j) {
                    j++;
                }
            }
        }
        return false;
    }
};
