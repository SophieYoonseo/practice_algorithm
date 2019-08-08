#include<iostream>

#define MAX 501

using namespace std;

int size, ans;
int arr[MAX][MAX];
int dp[MAX][MAX];

void input()
{
	cin>>size;
	for(int i=1; i<=size; i++){
		for(int j=1; j<=i; j++){
			cin>>arr[i][j];
		}
	}
}

void find_max()
{
	int maximum(0);
	for(int i=1; i<=size; i++){
		if(dp[size][i] > maximum)	maximum=dp[size][i];
	}
	ans = maximum;
}

void solution()
{
	arr[0][0] = arr[0][1] = arr[1][0] = dp[0][0] = dp[0][1] = dp[1][0] = 0;
	dp[1][1] = arr[1][1];
	for(int i=1; i<size; i++){
		for(int j=1; j<=i; j++){
			if(dp[i+1][j] < dp[i][j] + arr[i+1][j]){
				dp[i+1][j] = dp[i][j] + arr[i+1][j];
			}
			if(dp[i+1][j+1] < dp[i][j] + arr[i+1][j+1]){
				dp[i+1][j+1] = dp[i][j] + arr[i+1][j+1];
			}
		}
	}
	find_max();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	input();
	solution();
	
	cout<<ans<<"\n";
	
	return 0;
}
