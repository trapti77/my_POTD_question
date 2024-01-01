class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int l=s.length();
        int ans=-1;
	for(int i=0;i<l;i++)
	{
		for(int j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
                int m=j-(i+1);
			  ans=max(ans,m);
			}
		}
	}
    if(ans>=0)
    {
        return ans;
    }
	return -1;
	
    }
};
