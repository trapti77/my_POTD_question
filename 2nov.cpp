class Solution {
public:
static int ones(int n)
{
  int c=0;
  while(n>0)
  {
    int d=n%2;
    if(d==1)
    {
      c++;
    }
    n=n/2;
  }
return c;
}
static bool comp(int a,int b)
{
  int bitA=ones(a);
  int bitB=ones(b);
  if(bitA==bitB)
  {
    return a<b;
  }
  return bitA<bitB;
}
    vector<int> sortByBits(vector<int>& arr) {
       sort(arr.begin(),arr.end(),comp);
   return arr; 
    }
};
