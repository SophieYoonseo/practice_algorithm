#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test(0);
	cin>>test;
	
	int arr[test+1][3] = {0};
	for(int i=0; i<test; i++){
		cin>>arr[i][0]>>arr[i][1];
		arr[i][2] = arr[i][0] + arr[i][1];
	}
	
	for(int i=0; i<test; i++){
		cout<<"Case #"<<i+1<<": "<<arr[i][0]<<" + "<<arr[i][1]<<" = "<<arr[i][2]<<"\n";
	}
	return 0;
}
