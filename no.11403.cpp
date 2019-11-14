#include<iostream>

using namespace std;

int dp[101][101];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n(0);
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>dp[i][j];
		}
	}
	for(int k=1; k<=n; k++){
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				// i->j로 갈 때 k를 거쳐 갈 수 있다고 생각했을 때  
				if(dp[i][k]==1&&dp[k][j]==1)	dp[i][j] = 1;
			}
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<dp[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	
	return 0;
}
