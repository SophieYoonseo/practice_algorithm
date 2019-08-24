#include<iostream>
#include<algorithm>

#define MAX 123456789

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
	
	int file(0);
	for(int i=0; i<num; i++){
		cin>>file;
		for(int j=1; j<=file; j++){
			cin>>arr[j];
			sum[j] = sum[j-1] + arr[j];
		}
		
		for(int k=1; k<file; k++){
			for(int z=1; z+k<=file; z++){
				int temp = z+k;
				dp[z][k+z] = MAX;
				
				for(int p=z; p<temp; p++)
					dp[z][temp] = min(dp[z][temp], dp[z][p] + dp[p+1][temp] + sum[temp] - sum[z-1]);
			}
		}
		cout<<dp[1][file]<<"\n";
	}
	return 0;
}
