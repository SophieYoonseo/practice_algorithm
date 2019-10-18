#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0), k(0);
	cin>>num>>k;
	
	int arr[num]={0};
	for(int i=0; i<num; i++){
		cin>>arr[i];
	}
	sort(arr, arr+num);
	
	cout<<arr[k-1]<<"\n";
	
	return 0;
}
