class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        unordered_set<int>st;
        
        for( int num : arr ){
            st.insert(num*num);
        }
        
        for( int num1 : st ){
            for( int num2 : st ){
                if(num2 != num1){
                    if(st.count(num1+num2)) return true;
                }
        }
        } return false;
    }
};