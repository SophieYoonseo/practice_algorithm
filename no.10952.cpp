#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a(0), b(0), sum(0);
	while(1){
		cin>>a>>b;
		if(a==0 && b==0)	break;
		sum = a+b;
		cout<<sum<<"\n";
	}
	
	return 0;
}
