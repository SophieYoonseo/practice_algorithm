#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, c;
	cin>>a>>b>>c;
	
	if(b>=c) {
		cout<<"-1"<<"\n";
		return 0;
	}
	else
		cout<<a/(c-b) + 1 <<"\n";
	
	return 0;
}
