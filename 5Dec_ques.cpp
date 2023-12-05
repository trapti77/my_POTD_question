class Solution {
public:
  
    int countCharacters(vector<string>& words, string chars) {
    vector<int>countch(26,0);
	for(char &ch : chars){
		countch[ch-'a']++;
	}
	int ans=0;
	for(string &str:words)
	{
		vector<int>countwordch(26,0);
		for(char&ch:str)
		{
		countwordch[ch-'a']++;	
		}
		bool ok=true;
		for(int i=0;i<26;i++)
		{
			if(countwordch[i]>countch[i])
			{
				ok=false;
				break;
			}
		}
		if(ok==true)
		{
		ans+=str.length();	
		}
	}
	return ans;
    }
};
