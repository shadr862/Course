#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{

	ll n,c;
	cin>>n>>c;

	ll coins[n+1];
	bool dp[n+1][c+1];
	memset(dp,0,sizeof(dp));

	for(ll i=1;i<=n;i++) cin>>coins[i];

	for(ll i=0;i<=n;i++) dp[i][0]=1;

	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=c;j++){
			dp[i][j]=dp[i-1][j];
			if(j>=coins[i]) dp[i][j]|=dp[i-1][j-coins[i]];
		}
	}

	if(dp[n][c]){
            cout<<"YES"<<endl;
            ll i=n,j=c;
            while(i && j){
                if(dp[i-1][j]){
                    i--;
                    continue;
                }
                if(i!=n && j!=c) cout<<" ";
                cout<<coins[i];
                j-=coins[i],i--;
            }cout<<endl;
	}
	else cout<<"NO"<<endl;

	return 0;
}
