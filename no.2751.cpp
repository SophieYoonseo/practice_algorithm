#include<iostream>

using namespace std;

const int MAX = 1000000;

int size;
int arr[MAX];
int temp[MAX];

void merge(int first, int mid, int last)
{
	int left = first;
	int middle = mid+1;
	int right = first;
	
	while(left<=mid && middle<=last)
	{
		if(arr[left]<arr[middle])
			temp[right] = arr[left++];
		else
			temp[right] = arr[middle++];
		right++;
	}
	
	if(left>mid)
		for(int i = middle; i<=last; i++)
			temp[right++] = arr[i];
	else
		for(int j = left; j<=mid; j++)
			temp[right++] = arr[j];
	
	for(int i = first; i<=last; i++)
		arr[i] = temp[i];	
}

void mergeSort(int first, int last)
{
	int mid(0);
	if(first<last){
		mid = (first+last)/2;
		
		mergeSort(first, mid);
		mergeSort(mid+1, last);
		
		merge(first, mid, last);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>size;
	
	for(int i=0; i<size; i++)
		cin>>arr[i];
		
	mergeSort(0, size-1);
	
	for(int i=0; i<size; i++)
		cout<<arr[i]<<"\n";
		
	return 0;
} 
