#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	char str[100];
	cin>>str;
	int n = strlen(str);
	for(int i=0; i<n; i++){
		cout<<str[i];
		if((i+1)%10==0) cout<<"\n";
	}

	return 0;
}
