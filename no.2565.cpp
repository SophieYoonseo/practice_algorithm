#include<iostream>
#include<algorithm>

const int MAX = 501;

using namespace std;

pair<int, int> arr[MAX];
int dp[MAX];

int LIS(int n)
{
	int index(0);
	int length(0);
	
	dp[index] = arr[0].second;
	
	for(int i=1; i<n; i++){
		if(dp[index] < arr[i].second){
			dp[++index] = arr[i].second;
		}
		else{
			int temp(0);
			temp = lower_bound(dp, dp+index, arr[i].second) - dp;
			dp[temp] = arr[i].second;
			length++;
		}
	}
	return length;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	 
	for(int i=0; i<num; i++)
		cin>>arr[i].first>>arr[i].second;
	
	sort(arr, arr+num);
	
	cout<<LIS(num)<<"\n";
	 
	return 0;
}
