#include<iostream>

using namespace std;

int arr[1001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0), temp(0);
	cin>>num;
	
	for(int i=0; i<num; i++){
		cin>>arr[i];
	}
	
	//bubbleSort
	for(int i=0; i<num; i++){
		for(int j=0; j<num-1; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	//insertionSort
	for(int i=0; i<num-1; i++){
        int j = i;
        while(j>=0 && arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    } 
	 
	for(int i=0; i<num; i++){
		cout<<arr[i]<<"\n";
	}
	
	return 0;
}
