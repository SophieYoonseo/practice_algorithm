#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a(0), b(0);
	
	while(true){
		cin>>a>>b;
		if(cin.eof()==true)	break;
		if(a<=0 || b>=10)	break;
		cout<<a+b<<"\n";
	} 
	return 0;
}
