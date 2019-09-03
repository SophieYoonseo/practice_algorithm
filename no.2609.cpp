#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	if(b==0)	return a;
	else
	    return gcd(b, a%b);
}

/* not recursive
int gcd(int a, int b)
{
	while(b != 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
*/
int lcm(int a, int b)
{
	return(a*b)/gcd(a, b);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b;
	cin>>a>>b;
	
	cout<<gcd(a, b)<<"\n";
	cout<<lcm(a, b)<<"\n";
	return 0;
}
