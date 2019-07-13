#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test;
	cin>>test;
	
	int arr[3][test+1] = {0};
	for(int i=0; i<test; i++){
		cin>>arr[0][i]>>arr[1][i];
	}
	for(int i=0; i<test; i++)
		arr[2][i] = arr[0][i] + arr[1][i];
	
	for(int i=0; i<test; i++)
		cout<<"Case #"<<i+1<<": "<<arr[2][i]<<"\n";
	return 0;
}
