#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<i; j++)
			cout<<" ";
		for(int x=N; x>=i; x--)
			cout<<"*";
		cout<<"\n";	
	}
	return 0;
}
