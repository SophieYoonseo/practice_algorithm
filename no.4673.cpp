#include<iostream>
#define N 10001 //array[1~10000]

using namespace std;

bool array[N];

int construct(int n)
{
	int sum = n;
	
	while(1)
	{
		if(n==0)	break;
		sum+=n%10;
		n=n/10;
	}
	
	return sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=1; i<N; i++){
		int num = construct(i);	
		
		if(num <= N){
			array[num]=true; //if num isn't self number
		}
	}
	
	for(int i=1; i<N; i++){
		if(!array[i])	cout<<i<<"\n";
	}
	
	return 0;
	
}
