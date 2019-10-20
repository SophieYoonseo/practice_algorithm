#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	int count(0), ans=num;

	while(1){
		int a(0), b(0), temp(0);
		a = num/10;
		b = num%10;
		temp = a + b;
		if(temp>=10)	temp %= 10;
		num = b*10 + temp;
		count++;
		if(ans==num)	break;
	}
	cout<<count<<"\n";
	return 0;
}
