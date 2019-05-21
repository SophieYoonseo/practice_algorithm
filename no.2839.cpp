#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	
	int p3=0;
	int p5=0;
	
	if(N%5== p3)
		if(N%5 !=0 && N>=0){
			N-=3;
			p3++;
			break;
		}
		else if(N<0){
			cout<<"-1"<< endl;
		}
			
		else{
			p5=N/5;
			cout<<p3+p5<<endl;
			break;
	
	return 0;
}
