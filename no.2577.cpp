#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, c;
	cin>>a>>b>>c;
	
	int mul(0);
	mul = a*b*c;
	
	int arr[10]={0};
	while(mul != 0){
		arr[mul%10] += 1;   //units
		mul /= 10;
	}
	
	for(int i=0; i<10; i++){
		cout<<arr[i]<<"\n";
	}
	
	
	return 0;
}
