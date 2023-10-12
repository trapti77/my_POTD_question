class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {

   vector<pair<int,int>>pairs;
   for(int i=0;i<people.size();i++)
   {
       pairs.push_back({people[i],i});
   }
       sort(pairs.begin(),pairs.end());
       sort(flowers.begin(),flowers.end());
       int l=0;
       vector<int>ans(people.size());
       multiset<int>s;
       for(int i=0;i<pairs.size();i++)
       {
           while(l<flowers.size()&&pairs[i].first>=flowers[l][0])
               s.insert(flowers[l][1]),l++;
               while(s.size()&&(*(s.begin())<pairs[i].first))
                   s.erase(s.begin());
                   ans[pairs[i].second]=s.size();
               
       }
   
   return ans;    
    }
};
