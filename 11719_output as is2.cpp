#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str; //characters received
	int n=0; //number of input
	
	for(int i=0; i<100; i++)
	{
		getline(cin, str);
		cout<<str<<endl;
	}
	
	return 0;
}
