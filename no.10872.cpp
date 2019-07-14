#include<iostream>

using namespace std;

int solution(int num)
{
	if(num == 0)	return 1;
	else	return num*solution(num-1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num;
	cin>>num;
	
	int ans;
	ans = solution(num);
	
	cout<<ans<<"\n";
	 
	return 0;
}
