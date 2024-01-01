class Solution {
public:
 long long solve(int n, int k, int target){
        vector<long long> prev(target+1,0);
        vector<long long> curr(target+1,0);
        prev[0]=1; 
        int mod = 1e9+7; 
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                long long ans=0;
                for(int x=1;x<=k;x++){
                    if(j-x>=0){
                        ans+=prev[j-x] % mod;
                    }
                }
                curr[j] = ans; 
            }
            prev = curr; 
        }
        return prev[target] % mod; 
    }
    int numRollsToTarget(int n, int k, int target) {
        return solve(n, k, target) ;
    }
};
