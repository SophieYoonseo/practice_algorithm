#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int year;
	cin>>year;
	
	if(year<0 || year>4000)	return 0;
	
	int leap(0);
	if(year%4 == 0){
		if(year%100 != 0 || year%400 == 0)	leap = 1;
		else	leap=0;
	}
	else	leap = 0;
	
	cout<<leap<<"\n";
	return 0;
}
