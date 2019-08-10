#include<iostream>

using namespace std;

long long dp[91];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	dp[0] = 0;
	dp[1] = 1;
		
	for(int i=2; i<=num; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	cout<<dp[num];
	
	return 0;
}
