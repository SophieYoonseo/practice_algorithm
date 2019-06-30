#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[10];
	for(int i=1; i<10; i++){
		cin>>arr[i];
	}
		
	int max(0);
	int idx(0);
	for(int j=1; j<=9; j++){
		if(max<arr[j]){
			max = arr[j];
			idx = j;
		}
	}
	
	cout<<max<<"\n";
	cout<<idx<<"\n";
	
	return 0;
}
