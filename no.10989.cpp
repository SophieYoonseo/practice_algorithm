#include<iostream>

using namespace std;

int arr[10001];

void ascending(){
	
	// 누적 합 
	for(int i=1; i<10001; i++){
		arr[i] += arr[i-1];
	}
	for(int i=1; i<10001; i++){
		//arr[i] - arr[i-1]은 i가 입력된 횟수 
		int index = arr[i] - arr[i-1];
		while(index--){
			cout<<i<<"\n";
		}
	}
	
	/*
	for(int i=1; i<10001; i++){
		if(arr[i] > 0){
			for(int j=0; j<arr[i]; j++){
				cout<<i<<"\n";
			}
		}
	}
	*/
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num;
	cin>>num;
	
	int digit(0);

	for(int i=0; i<num; i++){
		cin>>digit;
		arr[digit]++;
	}
	
	ascending();
	
	return 0;
}
