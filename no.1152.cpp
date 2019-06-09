#include<iostream>
#include<string>

#define MAX 1000001

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str={};
	int count=1;
	
	getline(cin, str);
	
	if(str.length() > 1000000) return 0;
	
	for(int i=0; i<str.length(); i++){
		if(str.at(i)==' ')	count++;
	}
	
	if(str.at(0)==' ')	count--;
	if(str.at(str.length()-1) == ' ')	count--;
	
	cout<<count<<"\n";
	
	return 0;
}
