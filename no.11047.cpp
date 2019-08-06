#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0), money(0);
	cin>>num>>money;
	
	int value[num];
	for(int i=num-1; i>=0; i--)
		cin>>value[i];
	
	int count(0);
	for(int i=0; i<num; i++){
		if(money >= value[i]){
			count += money/value[i];
			money %= value[i];
		}
	}
	cout<<count<<"\n";
	return 0;
}
