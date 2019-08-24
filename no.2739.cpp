#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0), mul(0);
	cin>>num;
	
	for(int i=1; i<10; i++){
		mul = num*i;
		cout<<num<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<mul<<"\n";
	}
	return 0;
}
