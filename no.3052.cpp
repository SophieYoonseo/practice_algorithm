#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	int remainder[42]={0,};
	
	for(int i=0; i<10; i++){
		cin>>num;
		remainder[num%42] = 1;
	}
	
	int count(0);
	for(int i=0; i<42; i++){
		count += remainder[i];
	}
	cout<<count<<"\n";
	
	return 0;
}
