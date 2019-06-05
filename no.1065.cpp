#include<iostream>

using namespace std;

int count(0);

int arithmetic(int n)
{
	int digit1(0), digit2(0), digit3(0);
	int diff1(0), diff2(0);
	
	if(n<100)	count=n;
	else{
		for(int i=100; i<=n; i++){
			digit1=i/100;
			digit2=(i-(digit1*100))/10;
			digit3=i-(digit1*100)-(digit2*10);
			
			diff1 = digit1-digit2;
			diff2 = digit2-digit3;
			
			if(digit1==0)	count++;
			if(diff1==diff2)	count++;
		}
		count += 99;
	}
	
	return count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	count = arithmetic(n);
	cout<<count<<"\n";
	
	return 0;
}
