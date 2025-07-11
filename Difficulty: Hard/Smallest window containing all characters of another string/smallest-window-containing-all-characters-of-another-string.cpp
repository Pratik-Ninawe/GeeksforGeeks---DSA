class Solution {
  public:
    // Function to find the smallest window in the string s1 consisting
    // of all the characters of string s2.
    string smallestWindow(string &s1, string &s2) {
        // Your code here
        
        unordered_map<char,int>ms2;
        for(auto it:s2){
            ms2[it]++;
        }

       //length of th answer
       int len=INT_MAX;
       int start=0;//store starting index of the ans string 
        int count=ms2.size();
        int i=0,j=0;
        while(j<s1.size()){
          ms2[s1[j]]--;
          //this will keep track whether all elements of s2 come in s1 substring
          if(ms2[s1[j]]==0){
              count--;
          }
          //it means if all characters come then this is the possible answer note its length
          if(count==0){
              //we will get the index from where we can start our answer as it updates the i pointer
              while(count==0){
                  if(len>j-i+1){
                      len=j-i+1;
                      start=i;
                  }
                  ms2[s1[i]]++;
                  if(ms2[s1[i]]>0){
                      count++;
                  }
                  i++;
              }
          }
      
      
        j++;
      
        }


        if(len==INT_MAX){
            return "";
        }
        return s1.substr(start,len);
    }

};