class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
       unordered_map<string,int>word;
       for(auto& path:paths)
       {
           string source=path[0];
           word[source]=1;
       }
       for(auto& path1:paths)
       {
           string dest=path1[1];
           if(word[dest]!=1)
           {
            return dest;
         }
       }
       return "";
        /*int n=paths.size();
        int m=paths[0].size();
        string ans=paths[n-1][m-1];
        if(paths[0][0]==paths[n-1][m-1])
        {
            ans=paths[0][1];
        }
        return ans;*/
    }
};
