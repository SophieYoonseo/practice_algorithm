#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;  //number
	cin>>n;
	char num[n+1];
	int sum;
	
	for(int i=1; i<=n; i++)
		cin>>num[i];
	
	for(int i=1; i<=n; i++)
		sum += num[i] -48;
	cout<<sum<<"\n";	
}
