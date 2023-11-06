class Solution {
public:
    int strStr(string haystack, string needle) {
       int n=haystack.size();
  int n1=needle.size();
  for(int i=0;i<n-n1+1;i++)
  {
    if(haystack.substr(i,n1)==needle)
    {
      return i;
    }
  }
     return -1;  
    }
};
