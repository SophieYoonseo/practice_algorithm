#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	for(int i=0; i<num; i++){
		int h(0), w(0), n(0);
		cin>>h>>w>>n;
		
		n--;
		int y = n%h+1;
		int x = n/h+1;
		
		cout<<y;
		if(1<=x && x<=9)	cout<<"0"<<x<<"\n";
		else	cout<<x<<"\n";
	}
	return 0;
}
