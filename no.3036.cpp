#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	return	a%b ? gcd(b, a%b) : b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	int arr[num+1];
	cin>>arr[0];
	
	int temp(0);
	for(int i=1; i<num; i++){
		cin>>arr[i];
		temp = gcd(arr[0], arr[i]);
		cout<<arr[0]/temp<<"/"<<arr[i]/temp<<"\n";
	}
	
	return 0;
}
