#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[5]={0};
	for(int i=0; i<4; i++){
		cin>>arr[i];
	}
	sort(arr, arr+4);
	
	int width=arr[0]*arr[2];
	cout<<width<<"\n";
	
	return 0;
}
