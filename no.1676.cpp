#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	int two(0), five(0);
	
	for(int i=2; i<=num; i*=2){
		two += num/i;
	}
	for(int j=5; j<=num; j*=5){
		five += num/j;
	}
	
	int ans(0);
	ans = (two<five) ? two:five;
	
	cout << ans <<"\n";
	return 0;
}
