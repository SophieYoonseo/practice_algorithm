#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	string day[7]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	
	int x, y, sum=0; //month, date 
	cin>>x>>y;
	
	for(int i=0; i<x; i++){
		if(i+1 == x)   //if i+1 is equal to the input month
			sum+=y;    //add the number of days entered
		else
			sum+=month[i];  //add the total number of days in the i-th month
	}
	cout<<day[sum%7]<<"\n";
	
	return 0;
}
