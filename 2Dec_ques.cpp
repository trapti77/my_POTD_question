#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int solve(vector<int>&v,int n){
	int msum=0;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=v[j];
		    msum=max(msum,sum);	
		}
	}
	return msum;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  cout<<solve(v,n);
	return 0;
}
