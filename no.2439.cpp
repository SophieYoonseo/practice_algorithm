#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin>>N;
	
	for(int i=1; i<=N; i++){
		for(int j=N; j>i; j--)
			cout<<" ";
		for(int x=1; x<=i; x++)
			cout<<"*";
		cout<<"\n";
	}

	return 0;
}
