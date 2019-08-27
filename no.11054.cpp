#include<iostream>

#define MAX 1001

using namespace std;

int num;
int arr[MAX];
int dp[MAX];    // 앞에서부터 찾는 최장수열
int r_dp[MAX];    // 뒤에서부터 찾는 최장수열
 
void Input()
{
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cin >> arr[i];
    }
}
 
void Solution()
{
    for (int i = 1; i <= num; i++)
    {
        dp[i] = 1;
        for (int j = 1; j <= i; j++)
        {
            if (arr[j] < arr[i] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
 
    for (int i = num; i >= 1; i--)
    {
        r_dp[i] = 1;
        for (int j = num; j >= i; j--)
        {
            if (arr[i] > arr[j] && r_dp[j] + 1 > r_dp[i])
            {
                r_dp[i] = r_dp[j] + 1;
            }
        }
    }
 
    int ans = 0;
    for (int i = 0; i <= num; i++)
    {
        if (ans < dp[i] + r_dp[i] - 1)
			ans = dp[i] + r_dp[i] - 1;
    }
    cout << ans << "\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	Input();
	Solution();

	return 0;
}
