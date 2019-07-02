#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num;
	cin>>num;
	
	int a(0), b(0);
	for(int i=0; i<num; i++){
		cin>>a>>b;
		cout<<a+b<<"\n";
	} 
	return 0;
}
