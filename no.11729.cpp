#include<iostream>

using namespace std;

int arr[21];
int count;
void hanoi(int n, int left, int mid, int right){
	if (n == 1){
		cout<<left<<" "<<mid<<"\n";
		count++;
	}

	else{

		hanoi(n-1, left, right, mid);

		hanoi(1, left, mid, right);

		hanoi(n-1, right, mid, left);

	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	arr[1]=1;
	for(int i=2; i<=num; i++){
		arr[i]=arr[i-1]*2+1;
	}
	cout<<arr[num]<<"\n";
	
	hanoi(num, 1, 3, 2);
	
	return 0;
}
