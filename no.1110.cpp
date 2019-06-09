#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num, digit, first, second, temp, count=0;
	cin>>num;
	if(num<0 || num>=100)	return 0;
	
	digit = num;
	while(1)
	{
		first=num/10;  //first digit
		second=num%10;  //second digit
		temp=(first+second)%10;  
		num=(second*10)+temp;
		count++;
		if(digit==num) break;
	}
	cout<<count<<"\n";
	
	return 0;
}
