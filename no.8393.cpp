#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int sum=0;
	
	for(int i=1; i<=n; i++)
		sum += i;
	cout<<sum<<"\n";
	
	return 0;	
}
