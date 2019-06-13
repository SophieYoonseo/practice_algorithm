#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int score[6];
	for(int i=0; i<5; i++){
		cin>>score[i];
		if(score[i]>= 0 && score[i]<=100 && score[i]%5 != 0) return 0;
	}
	
	int avg(0);
	for(int j=0; j<5; j++){
		if(score[j]<40)	score[j]=40;
		avg += score[j];
	}
	
	avg /= 5;
	
	cout<<avg<<"\n";

	return 0;
}
