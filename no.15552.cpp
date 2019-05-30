#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T; //number of test
	cin>>T;
	
	int a[T],b[T];
	for(int i=1; i<=T; i++)
		cin>>a[i]>>b[i];
		
	for(int j=1; j<=T; j++)
		cout<<a[j]+b[j]<<"\n";
		
	return 0;
}

