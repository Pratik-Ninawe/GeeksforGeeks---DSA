class Solution {
  public:
    int sumSubstrings(string &s) {
        // code here
        long long sum=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            int temp=s[i]-'0';
            int num=0,j=n;
            while(j--) num=num*10+temp;
            n--;
            // cout<<num<<" ";
            sum+=(i+1)* num;
        }
        return sum;
    }
};