#include<iostream>

using namespace std;

int primeNum(int n){
	if(n==1)	return 0;
	if(n==2)	return 1;
	for(int i=2; i<n; i++){
		if(n%i==0)	return 0;
	}
	return 1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0), count(0), calc;
	cin>>num;
	
	for(int i=0; i<num; i++){
		cin>>calc;
		if(primeNum(calc))	count++;
	}
	cout<<count<<"\n";
	return 0;
}
