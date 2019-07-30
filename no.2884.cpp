#include<iostream>

using namespace std;

int alarm(int hour, int min)
{
	if(min-45<0){
		min += 15;
		if(hour==0)	hour = 24-1;
		else	hour--;
	}
	else	min -= 45;
	
	cout<<hour<<" "<<min<<"\n";
	
	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int hour(0), min(0);
	cin>>hour>>min;
	
	if(hour<0 || hour>23 || min<0 || min>59)	return 0;
	
	alarm(hour, min);
	return 0;
}
