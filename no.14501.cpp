#include<iostream>
#include<vector>
#include<cstring>

#define INF 987654321
using namespace std;

int num;
pair<int, int> work[16];
int counseling[16];

int dp(int day)
{
	//if(day>=num+1)	return 0;
	
    if(day==num+1)
        return 0;

    if(day>num + 1)
        return -INF;
	
	
    int result=counseling[day];
    if(result != -1)
        return result;
        
    result = 0;

    result += max(work[day].second+dp(day+work[day].first), dp(day+1));
	
	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>num;
	for(int i=1; i<=num; i++)
		cin>>work[i].first>>work[i].second;
		
	memset(counseling, -1, sizeof(counseling));
	
	cout<<dp(1)<<"\n";
	return 0;
}
