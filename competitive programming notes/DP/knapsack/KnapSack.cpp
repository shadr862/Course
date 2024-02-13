//https://www.youtube.com/watch?v=-V1ZPs7H8Bs&list=PLA89VDCglojTxFQAdpPXFrE1h7el-Lo-D&index=2
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int w[n+1],c[n+1],dp[n+1][k+1];
	for(int i=1;i<=n;i++) cin>>w[i];
	for(int i=1;i<=n;i++) cin>>c[i];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=k;j++){
			if(!i || !j){
				dp[i][j]=0;
				continue;
			}
			if(w[i]>j) dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(dp[i-1][j-w[i]]+c[i],dp[i-1][j]);
		}
	}
	cout<<dp[n][k]<<endl;
	return 0;
}
/*
10 165
23 31 29 44 53 38 63 85 89 82
92 57 49 68 60 43 67 84 87 72
*/
/*
5 26
12 7 11 8 9
24 13 23 15 16
*/
/*
7 50
31 10 20 19 4 3 6
70 20 39 37 7 5 10
*/
/*
4 7
1 3 4 5
1 4 5 7
*/
