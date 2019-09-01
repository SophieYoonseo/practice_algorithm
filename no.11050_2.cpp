#include<iostream>

using namespace std;

int n, k;

int factorial(int num)
{
	if(num==0 || num == 1)	return 1;
	else
		return	num*factorial(num-1);

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>k;
	
	cout<<factorial(n) / (factorial(k)*factorial(n-k))<<"\n";
	return 0;
}
