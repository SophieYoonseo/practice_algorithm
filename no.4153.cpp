#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a(0), b(0), c(0);
	
	while(1)
	{
		cin>>a>>b>>c;
		if(a==0 || b==0 || c==0)	return 0;
		
		if(a*a+b*b == c*c || b*b+c*c == a*a || c*c+a*a==b*b)	cout<<"right"<<"\n";
		else	cout<<"wrong"<<"\n";
	}
	
	return 0;
}
