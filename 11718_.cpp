#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str; //characters received
	int n=0; //number of input
	
	do
	{
		getline(cin, str);
		if(str=="") break;
		cout<<str<<endl;
	}while(n<=100);
	
	return 0;
}
