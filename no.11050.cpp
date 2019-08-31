#include<iostream>

using namespace std;

int n, k;

int factorial(int num)
{
	if(num==0) return 1;
	int ans =  1;
	for(int i=1; i<=num; i++){
		ans *= i;
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>k;
	
	cout<<factorial(n) / (factorial(k)*factorial(n-k))<<"\n";
	return 0;
}
