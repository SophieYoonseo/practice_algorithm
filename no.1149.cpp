#include<iostream>

using namespace std;

int dp[1001][4];

void paint(int n)
{
	for(int i=1; i<=n; i++){
		cin>>dp[i][1]>>dp[i][2]>>dp[i][3];
	}
	for(int j=1; j<=n; j++){
		dp[j][1] = min(dp[j-1][2], dp[j-1][3]) + dp[j][1];
		dp[j][2] = min(dp[j-1][1], dp[j-1][3]) + dp[j][2];
		dp[j][3] = min(dp[j-1][1], dp[j-1][2]) + dp[j][3];
	}
	cout<<min(dp[n][1], min(dp[n][2], dp[n][3]))<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	paint(num);
	
	return 0;
}
