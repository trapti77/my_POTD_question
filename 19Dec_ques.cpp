class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ump;
        vector<vector<string>>ans;
        for(auto x:strs)
        {
            string s=x;
            sort(s.begin(),s.end());
            ump[s].push_back(x);
        }
        for(auto s:ump)
        {
            ans.push_back(s.second);
        }
        return ans;
    }
};
