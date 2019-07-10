#include<iostream>

#define MAX 1000000
using namespace std;

int sol(int num)
{
	int creator = num;
	while(num != 0){
		creator += num%10;
		num /= 10;
	}
	return creator;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	if(num<=0 && num>MAX)	return 0;
	
	for(int i=1; i<=MAX; i++){
		if(sol(i)==num){
			cout<<i<<"\n";
			return 0;
		}
	}
	cout<<"0"<<"\n";
	return 0;
}
