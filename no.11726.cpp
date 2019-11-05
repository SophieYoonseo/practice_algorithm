#include<iostream>

using namespace std;

int dp[1001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n(0);
	cin>>n;
	
	dp[1]=1;
	dp[2]=2;
	
	for(int i=3; i<1001; i++){
		dp[i] = (dp[i-1]+dp[i-2]) % 10007;
	}
	
	cout<<dp[n]<<"\n";
	return 0;
}

// n=i��° �� ���� ����� ���� (i - 1�϶��� ����� ��) + (i - 2�϶��� ����� ��) ��� ��Ģ  
