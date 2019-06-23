#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

char arr[10];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>arr;
	
	sort(arr, arr+strlen(arr), greater<int>());
	for(int i=0; i<strlen(arr); i++){
		cout<<arr[i];
	}
	return 0;
}
