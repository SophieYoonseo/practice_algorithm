#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[9];
	for(int i=0; i<8; i++){
		cin>>arr[i];
	}
	int count(0), decount(0);
	
	for(int i=1; i<8; i++){
		if(arr[i-1]<arr[i])	count++;
		else if(arr[i-1]>arr[i])	decount++;
	}
	
	if(count==7)	cout<<"ascending"<<"\n";
	if(decount==7)	cout<<"descending"<<"\n";
	if(count != 7 && decount != 7)	cout<<"mixed"<<"\n";
	
	return 0;
}
