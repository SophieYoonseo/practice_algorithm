#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m(0), n(0);
	cin>>m>>n;
	
	if(m>n)	return 0;
	
	int count(0), ans(0), min(10001);
	for(int i=m; i<=n; i++){
		for(int j=2; j<i; j++){
			if(i%j==0)	count++;	
		}
		if(count==0 && i!=1){
			ans += i;
			if(min>i)	min = i;
		}
		count = 0;
	}
	if(min == 10001)	cout<<"-1"<<"\n";
	else{
		cout<<ans<<"\n";
		cout<<min<<"\n";
	}	
	
	return 0;
}
