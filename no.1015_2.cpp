#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int len(0);
	cin>>len;
	
	int arr[len+1] = {0};
	int temp[len+1] = {0};
	
	for(int i=0; i<len; i++){
		cin>>arr[i];
		for(int j=0; j<i; j++){
			if(arr[i]>=arr[j])	temp[i]++;
			else temp[j]++;	
		}
	}
	
	for(int i=0; i<len; i++)	cout<<temp[i]<<" ";
	cout<<"\n";
	
	return 0;
}
