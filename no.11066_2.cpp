#include<iostream>
#include<algorithm>

#define MAX 987654321

using namespace std;

int arr[501];
int sum[501];
int dp[501][501];


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	int fileNum(0);
	while(num--)
	{
		cin>>fileNum;
		for(int i=1; i<=fileNum; i++){
			cin>>arr[i];
			sum[i] = sum[i-1] + arr[i];
		}
		
		for(int i=2; i<=fileNum; i++){
			for(int j=i-1; j>0; j--){
				dp[j][i] = MAX;
				for(int k=j; k<=i; k++)
					dp[j][i] = min(dp[j][i], dp[j][k] + dp[k+1][i]);
					
				dp[j][i] += sum[i] - sum[j-1];
			}
		}
		cout<<dp[1][fileNum]<<"\n";	
	}
	return 0;
}
